#include "position.h"

Position::Position(QWidget *parent, QWidget * _callparent, Position::func f, double x, double y, double xf, double yf, double eps, double tf, double t):
    QWidget(parent),callparent(_callparent),_f(f),_x(x),_y(y),_t(t),_xf(xf),_yf(yf),_tf(tf),_eps(eps)
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(next()));
    emitted = false;
}

Position::~Position()
{
    delete timer;
}

void Position::setCallParent(QWidget *_callparent)
{
    callparent = _callparent;
}

void Position::setFunction(Position::func f)
{
    _f = f;
}

void Position::setStart(double t)
{
    _t = t;
}

void Position::setStart(double x, double y)
{
    _x = x;
    _y = y;
}

void Position::setStart(double x, double y, double t)
{
    _x = x;
    _y = y;
    _t = t;
}

void Position::setEnd(double t)
{
    _tf = t;
}

void Position::setEnd(double x, double y)
{
    _xf = x;
    _yf = y;
}

void Position::setEnd(double x, double y, double t)
{
    _xf = x;
    _yf = y;
    _tf = t;
}

double Position::getX()
{
    return _x;
}

double Position::getY()
{
    return _y;
}

double Position::getT()
{
    return _t;
}

double Position::getXf()
{
    return _xf;
}

double Position::getYf()
{
    return _yf;
}

double Position::getTf()
{
    return _tf;
}

void Position::next()
{
    _f(_x, _y, _t);
    callparent->setGeometry(_x, _y, callparent->width(), callparent->height());
    isEnd();
}

void Position::isEnd()
{
    if(_tf == -1)
    {
        if(abs(_x - _xf) < 5 && abs(_y - _yf) < 5)
        {
            if(!emitted)
            {
                emit stop();
                emitted = true;
            }
        }
    }
    else if(_t >= _tf)
        timer->stop();
}

void Position::start(int eps)
{
    timer->start(eps);
}

void Position::setEmitted(bool _emitted)
{
    emitted = _emitted;
}
