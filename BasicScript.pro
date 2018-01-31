#-------------------------------------------------
#
# BasicScript - testing plugin to use during
#     AudioScript development
#
#-------------------------------------------------

include(../AudioScript/common.pri)

TARGET = BasicScript

TEMPLATE = lib

CONFIG += plugin c++11

DESTDIR = $$AS_PLUGIN_PATH

INCLUDEPATH += ../AudioScript/ASUtils

LIBS += -L$${AS_LIB_PATH} -l$${AS_LIB_NAME}

HEADERS += \
        basicscript.h \
        basicscriptfactory.h

SOURCES += \
        basicscript.cpp \
        basicscriptfactory.cpp

DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x050902    # disables all the APIs deprecated before Qt 5.9.2
