#-------------------------------------------------
#
# BasicScript - testing plugin to use during
#     AudioScript development
#
#-------------------------------------------------

TARGET = BasicScript

TEMPLATE = lib

CONFIG += plugin c++11

DESTDIR = /Users/Josh/QProjects/Builds

#QT       += widgets

INCLUDEPATH += ../AudioScript/ASUtils

LIBS += -L/Users/Josh/QProjects/Builds/ -lASUtils

HEADERS += \
        basicscript.h \
        basicscriptfactory.h

SOURCES += \
        basicscript.cpp \
        basicscriptfactory.cpp

DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x050902    # disables all the APIs deprecated before Qt 5.9.2
