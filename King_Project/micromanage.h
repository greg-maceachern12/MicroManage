#pragma once
#include "ui_micromanageform.h"
#include "mainpage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"

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


    private:
        Ui::MicroManage *ui;
        QDockWidget *sideMenu;
        QStackedWidget *stackedWidget;
        MainPage *mainPage;
        SignUp *signUp;
        Settings *settings;
        Messages *messages;
        void createInterface();

};

