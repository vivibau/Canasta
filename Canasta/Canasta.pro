#-------------------------------------------------
#
# Project created by QtCreator 2015-09-10T22:13:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Canasta
TEMPLATE = app


SOURCES += main.cpp\
    ui/canastamainwindow.cpp \
    utils/geometry.cpp

HEADERS  += ui/canastamainwindow.h \
    utils/geometry.h

FORMS    += ui/canastamainwindow.ui
