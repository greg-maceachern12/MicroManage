#-------------------------------------------------
#
# Project created by QtCreator 2018-10-09T15:07:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = King_Project
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
    micromanage.cpp \
    mainpage.cpp \
    RunMicroManage.cpp \
    welcome.cpp \
    help.cpp \
    notices.cpp \
    maintenance.cpp \
    signup.cpp \
    settings.cpp \
    messages.cpp \
    propertymain.cpp \
    profile.cpp \
    login.cpp

HEADERS += \
    mainpage.h \
    micromanage.h \
    welcome.h \
    help.h \
    notices.h \
    maintenance.h \
    signup.h \
    settings.h \
    messages.h \
    propertymain.h \
    profile.h \
    login.h

FORMS += \
    micromanageform.ui \
    mainpageform.ui \
    welcomeform.ui \
    helpform.ui \
    noticesform.ui \
    maintenanceform.ui \
    messagesform.ui \
    profileform.ui \
    loginform.ui \
    settingsform.ui \
    signupform.ui \
    propertymainform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
