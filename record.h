#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QTime>
#include <QFile>
#include <QTextStream>

class Record : public QWidget
{
    Q_OBJECT
public:
    explicit Record(QWidget *parent = 0);
    ~Record();
    void start();

signals:

public slots:
    void keyPressEvent(QKeyEvent *e);
private:
    QTime *time;
    QFile *file;
    QTextStream *fout;

};

#endif // RECORD_H
