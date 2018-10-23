#pragma once
#include "ui_micromanageform.h"
#include "mainpage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"
#include "propertymain.h"

namespace Ui {
    class MicroManage;
}

class MicroManage : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MicroManage(QWidget *parent = nullptr);
        //~MicroManage() override; Probably don't need this because it already inherits the destructor from QMainWindow

    public slots:
        void changePage();
        void showSideMenu();
        void openSettings();
        void openSignUp();
        void openMessages();
        void openProfile();
        void openProperty();

    private:
        Ui::MicroManage *ui;
        QDockWidget *sideMenu;
        QStackedWidget *stackedWidget;
        MainPage *mainPage;
        SignUp *signUp;
        Settings *settings;
        Messages *messages;
        Profile *profile;
        PropertyMain *property;

        void createInterface();

};

