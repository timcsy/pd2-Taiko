#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>
#include "userwindow.h"
#include "mainwindow.h"

namespace Ui {
class ResultWindow;
}

class ResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultWindow(int _Score = 0, UserWindow *_callparent = 0 , QWidget *parent = 0);
    ~ResultWindow();
    void deleteParent();

public slots:

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ResultWindow *ui;
    int Score;
    UserWindow *callparent;
};

#endif // RESULTWINDOW_H
