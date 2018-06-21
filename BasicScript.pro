#-------------------------------------------------
#
# BasicScript - testing plugin to use during
#     AudioScript development
#
#-------------------------------------------------

TARGET = BasicScript

TEMPLATE = lib

CONFIG += plugin c++11

INCLUDEPATH += ../AudioScript/ASUtils

LIBS += -L../AudioScript/ASUtils -lASUtils

HEADERS += \
        basicscript.h \
    basicpackage.h

SOURCES += \
        basicscript.cpp \
    basicpackage.cpp

DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x050902    # disables all the APIs deprecated before Qt 5.9.2
