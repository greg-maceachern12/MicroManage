#pragma once
#include "ui_micromanageform.h"
#include "mainpage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"
#include "propertymain.h"
#include "login.h"

namespace Ui {
    class MicroManage;
}

class MicroManage : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MicroManage(QWidget *parent = nullptr);
        void changePage(int);
        //~MicroManage() override; Probably don't need this because it already inherits the destructor from QMainWindow

    signals:

    public slots:
        //void changePage(int index);
        void showSideMenu();
        void openSettings();
        void openSignUp();
        void openMessages();
        void openProfile();
        void openProperty();
        void openLogin();

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
        Login *login;

        void createInterface();
        void closeEvent(QCloseEvent *event);

};

