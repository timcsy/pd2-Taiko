/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *ScoreText;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *ResultWindow)
    {
        if (ResultWindow->objectName().isEmpty())
            ResultWindow->setObjectName(QStringLiteral("ResultWindow"));
        ResultWindow->resize(480, 320);
        centralwidget = new QWidget(ResultWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 80, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        ScoreText = new QLabel(centralwidget);
        ScoreText->setObjectName(QStringLiteral("ScoreText"));
        ScoreText->setGeometry(QRect(270, 80, 61, 41));
        ScoreText->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 230, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 230, 75, 23));
        ResultWindow->setCentralWidget(centralwidget);

        retranslateUi(ResultWindow);

        QMetaObject::connectSlotsByName(ResultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ResultWindow)
    {
        ResultWindow->setWindowTitle(QApplication::translate("ResultWindow", "MainWindow", 0));
        label->setText(QApplication::translate("ResultWindow", "Score : ", 0));
        ScoreText->setText(QApplication::translate("ResultWindow", "0", 0));
        pushButton->setText(QApplication::translate("ResultWindow", "restart", 0));
        pushButton_2->setText(QApplication::translate("ResultWindow", "exit", 0));
    } // retranslateUi

};

namespace Ui {
    class ResultWindow: public Ui_ResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
