#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QTime>
#include <QFile>

class Record : public QWidget
{
    Q_OBJECT
public:
    explicit Record(QWidget *parent = 0);
    void start();

signals:

public slots:
    void keyPressEvent(QKeyEvent *e);
private:
    QTime *time;
    QFile *file;
};

#endif // RECORD_H
