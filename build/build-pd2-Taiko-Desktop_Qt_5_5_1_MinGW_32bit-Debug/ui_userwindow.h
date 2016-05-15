/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *TimeText;
    QLabel *ScoreText;
    QLabel *label_11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(511, 486);
        UserWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 600, 400));
        label->setStyleSheet(QStringLiteral(""));
        label->setLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/bg.png")));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-10, 110, 522, 71));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(134, 134, 134);"));
        graphicsView->setLineWidth(0);
        QBrush brush(QColor(139, 139, 139, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(131, 131, 131, 255));
        brush1.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush1);
        graphicsView->setInteractive(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 410, 33, 33));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/blue_small_note.png")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 410, 33, 33));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/red_small_note.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 390, 51, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/blue_big_note.png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 390, 51, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/red_big_note.png")));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 450, 16, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 450, 16, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 450, 16, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 450, 16, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 20, 361, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("background-color: rgb(121, 255, 217);\n"
"background-color: rgb(255, 170, 0);"));
        TimeText = new QLabel(centralwidget);
        TimeText->setObjectName(QStringLiteral("TimeText"));
        TimeText->setGeometry(QRect(120, 20, 81, 41));
        TimeText->setFont(font);
        ScoreText = new QLabel(centralwidget);
        ScoreText->setObjectName(QStringLiteral("ScoreText"));
        ScoreText->setGeometry(QRect(310, 20, 81, 41));
        ScoreText->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(-420, 90, 511, 91));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/img/mtaiko.png")));
        UserWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserWindow->setStatusBar(statusbar);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "MainWindow", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_5->setText(QString());
        label_6->setText(QApplication::translate("UserWindow", " E", 0));
        label_7->setText(QApplication::translate("UserWindow", " F", 0));
        label_8->setText(QApplication::translate("UserWindow", "  J", 0));
        label_9->setText(QApplication::translate("UserWindow", "  I", 0));
        label_10->setText(QApplication::translate("UserWindow", "Time :            Score : ", 0));
        TimeText->setText(QApplication::translate("UserWindow", "30", 0));
        ScoreText->setText(QApplication::translate("UserWindow", "0", 0));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
