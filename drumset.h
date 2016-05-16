#ifndef DRUMSET_H
#define DRUMSET_H

#include <QWidget>
#include <QVector>
#include "drum.h"
#include <QMediaPlayer>
#include "record.h"
#include "userwindow.h"

class DrumSet : public QWidget
{
    Q_OBJECT
public:
    explicit DrumSet(QWidget *parent = 0, UserWindow *_callparent = 0, QLabel *_RLabel = 0, QLabel *_LLabel = 0, QMovie *_RMovie = 0, QMovie *_LMovie = 0, int _Speed = 1000, QLabel *_TimeText = 0, QLabel * _ScoreText = 0);
    ~DrumSet();
    void gamestart();
    void addDrum();
    void addDrumByBeat();
    void addTimer(int tim);
    QVector<Drum*> drum;
    QVector<QTimer*> duration;
signals:

public slots:
    void start();
    void next();
    void nextFront();
    void keyPressEvent(QKeyEvent *e);
    void changeTime();
protected:
    UserWindow *callparent;
    QLabel *RLabel;
    QLabel *LLabel;
    QMovie *RMovie;
    QMovie *LMovie;
    int N;
    int Front;
    int Score;
    int Time;
    int Speed;
    int DelayTime;
    QLabel *TimeText;
    QLabel *ScoreText;
    QTimer *textTimer;
    QTimer *DelayTimer;
    QMediaPlayer *player;
    Record *r;
};

#endif // DRUMSET_H
