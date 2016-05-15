#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    UserWindow * uw = new UserWindow();
    uw->show();
    this->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}
