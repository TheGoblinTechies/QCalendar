######################################################################
# Automatically generated by qmake (3.0) Tue Aug 23 20:08:13 2016
######################################################################

QT += widgets
CONFIG += c++11
TEMPLATE = app
TARGET = QCalendar
INCLUDEPATH += .

# Input
HEADERS += calendar.h mainwindow.h \
    preferencedialog.h \
    preferencemanager.h \
    configloader.h \
    dataadapter.h \
    calendarevent.h \
    eventdialog.h \
    eventlistdialog.h \
    deletedialog.h \
    color.h \
    calendarfile.h \
    filedetaildialog.h
FORMS += mainwindow.ui \
    preferencedialog.ui \
    eventdialog.ui \
    eventlistdialog.ui \
    deletedialog.ui \
    filedetaildialog.ui
SOURCES += calendar.cpp main.cpp mainwindow.cpp \
    preferencedialog.cpp \
    preferencemanager.cpp \
    configloader.cpp \
    dataadapter.cpp \
    calendarevent.cpp \
    eventdialog.cpp \
    eventlistdialog.cpp \
    deletedialog.cpp \
    color.cpp \
    calendarfile.cpp \
    filedetaildialog.cpp
TRANSLATIONS += QCalendar_zh_CN.ts

RESOURCES += \
    res.qrc

win32 {
    LIBS += user32.lib
}
