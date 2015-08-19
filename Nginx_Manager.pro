#-------------------------------------------------
#
# Project created by QtCreator 2015-08-01T08:18:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nginx_Manager
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    host.cpp \

HEADERS  += widget.h \
    host.h \
    listeners.h \

FORMS    += widget.ui
