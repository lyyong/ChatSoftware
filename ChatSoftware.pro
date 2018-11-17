#-------------------------------------------------
#
# Project created by QtCreator 2018-11-15T23:36:43
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatSoftware
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    main.cpp \
    Core/connector.cpp \
    Core/abstractinfocallback.cpp \
    Core/abstractmessagecoded.cpp \
    Core/abstractinfoprocessor.cpp \
    Core/abstractinfocallback.cpp \
    Core/abstractinfoprocessor.cpp \
    Core/abstractmessagecoded.cpp \
    Core/connector.cpp \
    Core/abstractinfocallback.cpp \
    Core/abstractinfoprocessor.cpp \
    Core/abstractmessagecoded.cpp \
    Core/connector.cpp \
    Login/loginwindow.cpp \
    Core/abstractinfocallback.cpp \
    Core/abstractinfoprocessor.cpp \
    Core/abstractmessagecoded.cpp \
    Core/connector.cpp \
    Login/loginwindow.cpp \
    main.cpp \
    Login/logininfoprocessor.cpp \
    Friends/friendwindow.cpp \
    Friends/friendinfoprocessor.cpp \
    POJO/abtractintroduction.cpp \
    POJO/myself.cpp \
    POJO/friend.cpp \
    Friends/localfriendlist.cpp

HEADERS += \
        loginwindow.h \
    loginwindow.h \
    Core/connector.h \
    Core/abstractinfocallback.h \
    Core/abstractmessagecoded.h \
    Core/abstractinfoprocessor.h \
    Core/abstractinfocallback.h \
    Core/abstractinfoprocessor.h \
    Core/abstractmessagecoded.h \
    Core/connector.h \
    Core/abstractinfocallback.h \
    Core/abstractinfoprocessor.h \
    Core/abstractmessagecoded.h \
    Core/connector.h \
    Login/loginwindow.h \
    Core/abstractinfocallback.h \
    Core/abstractinfoprocessor.h \
    Core/abstractmessagecoded.h \
    Core/connector.h \
    Login/loginwindow.h \
    Login/logininfoprocessor.h \
    Friends/friendwindow.h \
    Friends/friendinfoprocessor.h \
    POJO/abtractintroduction.h \
    POJO/myself.h \
    POJO/friend.h \
    Friends/localfriendlist.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    ChatSoftware.pro \
    ChatSoftware.pro
