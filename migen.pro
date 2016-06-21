#-------------------------------------------------
#
# Project created by QtCreator 2016-06-19T14:50:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = migen
TEMPLATE = app


SOURCES += main.cpp\
        migenmainwindow.cpp \
    centralwidget.cpp \
    settingsform.cpp \
    aboutdialog.cpp

HEADERS  += migenmainwindow.h \
    centralwidget.h \
    settingsform.h \
    aboutdialog.h

FORMS    += migenmainwindow.ui \
    centralwidget.ui \
    settingsform.ui \
    aboutdialog.ui

CONFIG += c++11

DISTFILES += \
    options.txt
