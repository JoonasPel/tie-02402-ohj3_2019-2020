TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        ../EX1/date.cc \
        ../EX1/fraction.cc \
        ../EX1/string.cc \
        ../EX1/vector.cc \
        main.cpp

DISTFILES += \
    ../EX1/Doxyfile

HEADERS += \
    ../EX1/date.hh \
    ../EX1/fraction.hh \
    ../EX1/string.hh \
    ../EX1/vector.hh
