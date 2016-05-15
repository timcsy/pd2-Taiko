#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "drum.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();
    QLabel *RGIFLabel;
    QMovie *Rmovie;
    QLabel *LGIFLabel;
    QMovie *Lmovie;

public slots:
signals:
   void keyPressEvent(QKeyEvent* e);

private slots:

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
