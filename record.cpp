#include "record.h"
#include <QChar>
#include <QLabel>
#include <QKeyEvent>

Record::Record(QWidget *parent) : QWidget(parent)
{
    time = new QTime();
    file = new QFile("D:\QT\pd2-Taiko\pd2-Taiko\record.txt");
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
        return;
}

Record::~Record()
{
    delete time;
    file->close();
    delete file;
}

void Record::start()
{
    time->start();
}

void Record::keyPressEvent(QKeyEvent *e)
{
    fout = new QTextStream(file);
    (*fout) << time->elapsed() << "\n";
    (*fout) << e->key() << " ";
    time->restart();
}

