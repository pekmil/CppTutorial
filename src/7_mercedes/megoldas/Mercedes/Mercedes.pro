TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bclass.cpp \
    repair.cpp \
    cclass.cpp \
    registry.cpp \
    vehicle.cpp

HEADERS += \
    bclass.h \
    repair.h \
    cclass.h \
    container.h \
    registry.h \
    vehicle.h
