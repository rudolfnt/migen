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
    centralwidget.cpp

HEADERS  += migenmainwindow.h \
    centralwidget.h

FORMS    += migenmainwindow.ui \
    centralwidget.ui

CONFIG += c++11
