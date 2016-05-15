#-------------------------------------------------
#
# Project created by QtCreator 2016-04-13T09:34:56
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drum.cpp \
    drumset.cpp \
    position.cpp \
    record.cpp \
    resultwindow.cpp \
    userwindow.cpp

HEADERS  += mainwindow.h \
    drum.h \
    drumset.h \
    position.h \
    record.h \
    resultwindow.h \
    userwindow.h

FORMS    += mainwindow.ui \
    resultwindow.ui \
    userwindow.ui

DISTFILES +=

RESOURCES += \
    img.qrc
