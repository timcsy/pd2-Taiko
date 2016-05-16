#include "drumset.h"
#include <QString>
#include "resultwindow.h"
#include <QFile>
#include <QTextStream>
#include <QChar>

DrumSet::DrumSet(QWidget *parent, UserWindow *_callparent, QLabel *_RLabel, QLabel *_LLabel, QMovie *_RMovie, QMovie *_LMovie, int _Speed, QLabel *_TimeText, QLabel *_ScoreText) :
    QWidget(parent),callparent(_callparent),RLabel(_RLabel),LLabel(_LLabel),RMovie(_RMovie),LMovie(_LMovie),Speed(_Speed),TimeText(_TimeText),ScoreText(_ScoreText)
{
    N = 0;
    Front = 0;
    Score = 0;
    Time = 62;
    TimeText->setText(QString::number(Time));
    drum.clear();
    duration.clear();
    addDrum();
    connect(callparent,SIGNAL(keyPressEvent(QKeyEvent*)),this,SLOT(keyPressEvent(QKeyEvent*)));
    textTimer = new QTimer(this);
    connect(textTimer, SIGNAL(timeout()), this, SLOT(changeTime()));
    DelayTimer = new QTimer(this);
    connect(DelayTimer, SIGNAL(timeout()), this, SLOT(start()));
    player = new QMediaPlayer(this);
    player->setMedia(QUrl("qrc:/img/HaWay.mp3"));
    player->setVolume(100);
    r = new Record;
}

DrumSet::~DrumSet()
{
    delete textTimer;
    delete DelayTimer;
    delete player;
    delete r;
}

void DrumSet::gamestart()
{
    RLabel->hide();
    RMovie->start();
    LLabel->hide();
    LMovie->start();
    textTimer->start(1000);
    player->play();
    DelayTimer->start(DelayTime);
    r->start();
}

void DrumSet::addDrum()
{
    QFile fin(":/recordnote.txt");
    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&fin);
    if(!in.atEnd())
    {
        QString line = in.readLine();
        Time = line.toInt();
    }
    if(!in.atEnd())
    {
        QString line = in.readLine();
        DelayTime = line.toInt()-3150;
    }
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QTextStream filein(&line);
        int dr,ti;
        filein>>dr>>ti;
        switch (dr)
        {
            case Qt::Key_I: drum.append(new RedBigDrum(callparent,callparent,RLabel,RMovie)); break;
            case Qt::Key_E: drum.append(new BlueBigDrum(callparent,callparent,LLabel,LMovie)); break;
            case Qt::Key_J: drum.append(new RedSmallDrum(callparent,callparent,RLabel,RMovie)); break;
            case Qt::Key_F: drum.append(new BlueSmallDrum(callparent,callparent,LLabel,LMovie)); break;
        }
        connect(drum[drum.size()-1],SIGNAL(next()),this,SLOT(nextFront()));
        addTimer(ti-11);
    }
}

void DrumSet::start()
{
    disconnect(DelayTimer, SIGNAL(timeout()), this, SLOT(start()));
    delete DelayTimer; DelayTimer = NULL;
    duration[N]->start();
    drum[N]->start();
}

void DrumSet::addDrumByBeat()
{
    QFile fin(":/note.txt");
    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&fin);
    if(!in.atEnd())
    {
        QString line = in.readLine();
        Time = line.toInt();
    }
    if(!in.atEnd())
    {
        QString line = in.readLine();
        Speed = line.toInt();
    }
    if(!in.atEnd())
    {
        QString line = in.readLine();
        DelayTime = line.toInt();
    }
    bool startflag = true;
    int tim = 0;
    while (!in.atEnd())
    {
        QString line = in.readLine();
        int val = Speed*4/line.size();
        for(int i = 0; i < line.size(); i++)
        {
            if(line[i].digitValue() != 0)
            {
                if(!startflag) addTimer(tim);
                startflag = false;
                switch (line[i].digitValue())
                {
                    case 1: drum.append(new RedBigDrum(callparent,callparent,RLabel,RMovie)); break;
                    case 2: drum.append(new BlueBigDrum(callparent,callparent,LLabel,LMovie)); break;
                    case 3: drum.append(new RedSmallDrum(callparent,callparent,RLabel,RMovie)); break;
                    case 4: drum.append(new BlueSmallDrum(callparent,callparent,LLabel,LMovie)); break;
                    default: drum.append(new RedBigDrum(callparent,callparent,RLabel,RMovie)); break;
                }
                tim = val;
                connect(drum[drum.size()-1],SIGNAL(next()),this,SLOT(nextFront()));
            }
            else if(!startflag) tim+=val;
        }
    }
    addTimer(tim);
}

void DrumSet::addTimer(int tim)
{
    QTimer *timer;
    timer = new QTimer(this);
    timer->setInterval(tim);
    connect(timer, SIGNAL(timeout()), this, SLOT(next()));
    duration.append(timer);
}

void DrumSet::next()
{
    N++;
    if(N < drum.size() || N < duration.size())
    {
        duration[N]->start();
        drum[N]->start();
        disconnect(duration[N-1], SIGNAL(timeout()), this, SLOT(next()));
        delete duration[N-1];
        duration[N-1] = NULL;
    }
    else
    {
        disconnect(duration[N-1], SIGNAL(timeout()), this, SLOT(next()));
        delete duration[N-1];
        duration[N-1] = NULL;
    }
}

void DrumSet::nextFront()
{
    Front++;
}

void DrumSet::keyPressEvent(QKeyEvent *e)
{
    r->keyPressEvent(e);
    if(Front < drum.size())
    {
        int n = drum[Front]->keyPress(e);
        Front += n/10;
        Score += n%10;
        ScoreText->setText(QString::number(Score));
    }
}

void DrumSet::changeTime()
{
    Time--;
    TimeText->setText(QString::number(Time));
    if(Time <= 0)
    {
        disconnect(textTimer, SIGNAL(timeout()), this, SLOT(changeTime()));
        callparent->hide();
        player->stop();
        delete player; player = 0;
        ResultWindow * rw = new ResultWindow(Score,callparent);
        rw->show();
    }
}

