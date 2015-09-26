TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    linkvector.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    linkvector.h

