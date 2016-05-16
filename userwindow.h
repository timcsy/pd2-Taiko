#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "drum.h"
#include "mainwindow.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(MainWindow *_callparent = 0, QWidget *parent = 0);
    ~UserWindow();
    QLabel *RGIFLabel;
    QMovie *Rmovie;
    QLabel *LGIFLabel;
    QMovie *Lmovie;
    MainWindow *callparent;

public slots:
signals:
   void keyPressEvent(QKeyEvent* e);

private slots:

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
