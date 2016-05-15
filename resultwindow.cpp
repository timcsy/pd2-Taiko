#include "resultwindow.h"
#include "ui_resultwindow.h"
#include "userwindow.h"

ResultWindow::ResultWindow(int _Score, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResultWindow),Score(_Score)
{
    ui->setupUi(this);
    ui->ScoreText->setText(QString::number(Score));
}

ResultWindow::~ResultWindow()
{
    delete ui;
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
