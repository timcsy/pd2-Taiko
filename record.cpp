#include "record.h"
#include <QTextStream>
#include <QChar>
#include <QLabel>
#include <QKeyEvent>

Record::Record(QWidget *parent) : QWidget(parent)
{
    time = new QTime();
    file = new QFile(":/record.txt");
    if (!file->open(QIODevice::WriteOnly | QIODevice::Text))
        return;
}

void Record::start()
{
    time->start();
}

void Record::keyPressEvent(QKeyEvent *e)
{
    QTextStream fout(file);
    fout << time->elapsed() << "\n";
    fout << e->key() << " ";
    time->restart();
}

