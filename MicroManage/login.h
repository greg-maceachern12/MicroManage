#pragma once
#include "ui_loginform.h"
#include "dbmodel.h"
//#include "micromanage.h"
#include <QtWidgets>
#include "profile.h"
#include "mainpage.h"

namespace Ui {
    class LoginForm;
}

class Login : public QWidget {
        Q_OBJECT

    public:
        explicit Login(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main, QStatusBar *status_bar);
        QCheckBox* getRememberMe();
        void clearInputs();
        ~Login();

    signals:

    public slots:

private slots:
    void on_logInPushButton_clicked();

private:
        Ui::LoginForm *ui;
        int us;
        Profile *profile;
        MainPage *mainPage;
        QStackedWidget *stackedWidget;
        QStatusBar *statusBar;
};

