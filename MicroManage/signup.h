#pragma once
#include "ui_signupform.h"
#include "profile.h"
#include "mainpage.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>

namespace Ui {
    class SignUpForm;
}

class SignUp : public QWidget
{
        Q_OBJECT

    public:
        explicit SignUp(QWidget *parent, QStackedWidget *stacked_widget, Profile *pro, MainPage *main, QStatusBar *status_bar);
        QToolButton* getMenuButton();
        ~SignUp();

    signals:

    public slots:
        void createUser();
        void setLandlord();
        void setTenant();
        void cancelAction();

   private slots:
        bool choosePhoto();


    private:
        Ui::SignUpForm *ui;
        Profile *profile;
        MainPage *mainPage;
        QStackedWidget *stackedWidget;
        QStatusBar *statusBar;
};
