#include "drum.h"
#include <QKeyEvent>
#include <Qt>

void moveleft(double & x, double & y, double & t)
{
    x+=-0.1*t;
    y=y;
    t+=1;
}

Drum::Drum(QWidget *parent, QWidget *_callparent, QLabel *_GIFLabel, QMovie *_movie) :
    QWidget(parent),callparent(_callparent),GIFLabel(_GIFLabel),movie(_movie)
{
    picture = new QLabel(callparent);
    picture->setGeometry(startX,posY,posW,posH);
    result = new QLabel(callparent);
    result->setGeometry(resultX,resultY,resultW,resultH);

    p = new Position(picture,picture,moveleft,startX,posY,endFail,posY);
    connect(p,SIGNAL(stop()),this,SLOT(nextDrum()));
}

Drum::~Drum()
{
    delete p;
    delete picture;
    delete result;

    delete timer;
}

void Drum::start()
{
    p->start(20);
}

int Drum::getResult(QKeyEvent *e,int Key)
{
    if(startFail <= p->getX())
    {
        //Do nothing
        return 0;
    }
    else if(endFail <= p->getX())
    {
        timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(deleteResult()));
        if(e->key() == Key && endSuccess <= p->getX() && p->getX() < startSuccess)
        {
            //get 2 points
            GIFLabel->show();
            result->setPixmap(QPixmap(":/img/success_hit.png"));
            delete p; p = NULL;
            delete picture; picture = NULL;
            timer->start(resultTime);
            return 12;
        }
        else if(e->key() == Key && endOK <= p->getX() && p->getX() < startOK)
        {
            //get 1 points
            GIFLabel->show();
            result->setPixmap(QPixmap(":/img/ok_hit.png"));
            delete p; p = NULL;
            delete picture; picture = NULL;
            timer->start(resultTime);
            return 11;
        }
        else
        {
            //fail, no points
            result->setPixmap(QPixmap(":/img/fail_hit.png"));
            p->setEmitted(true);
            timer->start(resultTime);
            return 10;
        }
    }
    else
    {
        //Delete drum, focus on the next drum, it will do automatically
        return 0;
    }
}

int Drum::keyPress(QKeyEvent *e)
{
    return getResult(e, Qt::Key_Space);
}

void Drum::deleteResult()
{

    delete result; result = NULL;
    disconnect(timer,SIGNAL(timeout()),this,SLOT(deleteResult()));
    delete timer; timer = NULL;
    GIFLabel->hide();
}

void Drum::nextDrum()
{
    emit next();
    delete result; result = NULL;
}

RedSmallDrum::RedSmallDrum(QWidget *parent, QWidget *_callparent, QLabel *_GIFLabel, QMovie *_movie) :
    Drum(parent, _callparent,_GIFLabel,_movie)
{
    picture->setPixmap(QPixmap(":/img/red_small_note.png"));
}

int RedSmallDrum::keyPress(QKeyEvent *e)
{
    return getResult(e, Qt::Key_J);
}

BlueSmallDrum::BlueSmallDrum(QWidget *parent, QWidget *_callparent, QLabel *_GIFLabel, QMovie *_movie) :
    Drum(parent, _callparent,_GIFLabel,_movie)
{
    picture->setPixmap(QPixmap(":/img/blue_small_note.png"));
}

int BlueSmallDrum::keyPress(QKeyEvent *e)
{
    return getResult(e, Qt::Key_F);
}

RedBigDrum::RedBigDrum(QWidget *parent, QWidget *_callparent, QLabel *_GIFLabel, QMovie *_movie) :
    Drum(parent, _callparent,_GIFLabel,_movie)
{
    picture->setPixmap(QPixmap(":/img/red_big_note.png"));
}

int RedBigDrum::keyPress(QKeyEvent *e)
{
    int res = getResult(e, Qt::Key_I);
    return (res/10)*10+(res%10)*2;
}

BlueBigDrum::BlueBigDrum(QWidget *parent, QWidget *_callparent, QLabel *_GIFLabel, QMovie *_movie) :
    Drum(parent, _callparent,_GIFLabel,_movie)
{
    picture->setPixmap(QPixmap(":/img/blue_big_note.png"));
}

int BlueBigDrum::keyPress(QKeyEvent *e)
{
    int res = getResult(e, Qt::Key_E);
    return (res/10)*10+(res%10)*2;
}
