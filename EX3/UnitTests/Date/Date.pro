QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_date.cpp \
    ../../WelcomeToTampere/baddate.cc \
    ../../WelcomeToTampere/date.cc

HEADERS += \
    ../../WelcomeToTampere/baddate.hh \
    ../../WelcomeToTampere/date.hh

INCLUDEPATH += \
            ../../WelcomeToTampere/

DEPENDPATH += \
            ../../WelcomeToTampere/
