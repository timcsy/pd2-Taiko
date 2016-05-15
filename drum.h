#ifndef DRUM_H
#define DRUM_H

#include "position.h"
#include <QLabel>
#include <QMovie>

class Drum : public QWidget
{
    Q_OBJECT
public:
    explicit Drum(QWidget *parent = 0, QWidget *_callparent = 0, QLabel *_GIFLabel = 0, QMovie *_movie = 0);
    ~Drum();
    void start();
    int getResult(QKeyEvent *e,int Key);
    const static int posY = 120;
    const static int startX = 550;
    const static int posW = 51;
    const static int posH = 51;
    const static int startFail = 250;
    const static int startOK = 130;
    const static int startSuccess = 115;
    const static int endSuccess = 95;
    const static int endOK = 80;
    const static int endFail = 50;
    const static int resultTime = 700;
    const static int resultX = 100;
    const static int resultY = 100;
    const static int resultW = 49;
    const static int resultH = 26;
signals:
    void next();
public slots:
    virtual int keyPress(QKeyEvent* e);
    void deleteResult();
    void nextDrum();
protected:
    QWidget *callparent;
    Position *p;
    QLabel *picture;
    QLabel *result;
    QLabel *GIFLabel;
    QMovie *movie;
    QTimer * timer;

};

class RedSmallDrum : public Drum
{
    Q_OBJECT
public:
    explicit RedSmallDrum(QWidget *parent = 0, QWidget *_callparent = 0, QLabel *_GIFLabel = 0, QMovie *_movie = 0);
public slots:
    int keyPress(QKeyEvent* e);
};

class BlueSmallDrum : public Drum
{
    Q_OBJECT
public:
    explicit BlueSmallDrum(QWidget *parent = 0, QWidget *_callparent = 0, QLabel *_GIFLabel = 0, QMovie *_movie = 0);
public slots:
    int keyPress(QKeyEvent* e);
};

class RedBigDrum : public Drum
{
    Q_OBJECT
public:
    explicit RedBigDrum(QWidget *parent = 0, QWidget *_callparent = 0, QLabel *_GIFLabel = 0, QMovie *_movie = 0);
public slots:
    int keyPress(QKeyEvent* e);
};

class BlueBigDrum : public Drum
{
    Q_OBJECT
public:
    explicit BlueBigDrum(QWidget *parent = 0, QWidget *_callparent = 0, QLabel *_GIFLabel = 0, QMovie *_movie = 0);
public slots:
    int keyPress(QKeyEvent* e);
};
#endif // DRUM_H
