#pragma once
#include "ui_micromanageform.h"
#include "welcome.h"
#include "mainpage.h"
#include "signup.h"
#include "settings.h"
#include "messages.h"
#include "profile.h"
#include "notices.h"
#include "maintenance.h"
#include "propertymain.h"
#include "login.h"
#include "logs.h"
#include "help.h"
#include "dbmodel.h"
#include "help.h"

namespace Ui {
    class MicroManageForm;
}

class MicroManage : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MicroManage(QWidget *parent = nullptr);
        Profile* getProfile();
        void setUserRole(int);
        ~MicroManage();

    signals:

    public slots:
        void showSideMenu();
        void openWelcome();
        void openMainPage();
        void openSettings();
        void openSignUpLandlord();
        void openSignUpTenant();
        void openMessages();
        void openProfile();
        void openProperties();
        void openLogin();
        //void openLogs();
        void openMaintenance();
        void openNotices();
        void openHelp();

    private:
        Ui::MicroManage *ui;
        Welcome *welcomePage;
        QDockWidget *sideMenu;
        QStackedWidget *stackedWidget;
        MainPage *mainPage;
        SignUp *signUp;
        Settings *settings;
        Messages *messages;
        Profile *profile;
        PropertyMain *properties;
        Maintenance *maintenance;
        Notices *notices;
        Login *login;
        Logs *logs;
        Profile *landlord;
        Help *helpPage;
        QList<QPushButton *> menuButtons;

        int userRole;

        void createInterface();
        void setUpDefaultMenu();
        void setUpCreateAccountMenu();
        void closeEvent(QCloseEvent *event);

};

