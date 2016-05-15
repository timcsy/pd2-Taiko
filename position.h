#ifndef POSITION_H
#define POSITION_H
#include <QWidget>
#include <QTimer>

class Position : public QWidget
{
    Q_OBJECT

public:
    typedef void (*func)(double & ,double &, double &);
    explicit Position(QWidget * parent, QWidget * _callparent, func f, double x = 0, double y = 0, double xf = 0, double yf = 0, double eps = 0.001, double tf = -1, double t = 0);
    ~Position();
    void setCallParent(QWidget * _callparent);
    void setFunction(func f);
    void setStart(double t);
    void setStart(double x, double y);
    void setStart(double x, double y, double t);
    void setEnd(double t);
    void setEnd(double x, double y);
    void setEnd(double x, double y, double t);
    double getX();
    double getY();
    double getT();
    double getXf();
    double getYf();
    double getTf();
    void isEnd();
    void start(int eps = 1);
    void setEmitted(bool _emitted);
public slots:
    void next();
signals:
    void stop();
private:
    QWidget * callparent;
    func _f;
    double _x;
    double _y;
    double _t;
    double _xf;
    double _yf;
    double _tf;
    double _eps;
    QTimer * timer;
    bool emitted;
};

#endif // POSITION_H
