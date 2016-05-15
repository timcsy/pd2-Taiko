#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>

namespace Ui {
class ResultWindow;
}

class ResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultWindow(int _Score = 0,QWidget *parent = 0);
    ~ResultWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ResultWindow *ui;
    int Score;
};

#endif // RESULTWINDOW_H
