#include "resultwindow.h"
#include "ui_resultwindow.h"

ResultWindow::ResultWindow(int _Score, UserWindow *_callparent, QWidget *parent) :
    callparent(_callparent),QMainWindow(parent),
    ui(new Ui::ResultWindow),Score(_Score)
{
    ui->setupUi(this);
    ui->ScoreText->setText(QString::number(Score));
    deleteParent();
}

ResultWindow::~ResultWindow()
{
    delete ui;
}

void ResultWindow::deleteParent()
{
    delete callparent->Rmovie;
    delete callparent->RGIFLabel;
    delete callparent->Lmovie;
    delete callparent->LGIFLabel;
}

void ResultWindow::on_pushButton_2_clicked()
{
    exit(0);
}

void ResultWindow::on_pushButton_clicked()
{
    UserWindow * uw = new UserWindow();
    uw->show();
    this->hide();
}
