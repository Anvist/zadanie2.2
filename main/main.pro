TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    source.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    header.h

