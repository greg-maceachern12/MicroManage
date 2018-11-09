#pragma once
#include "ui_loginform.h"
#include "dbmodel.h"
#include <QtWidgets>
#include "profile.h"

namespace Ui {
    class LoginForm;
}

class Login : public QWidget {
        Q_OBJECT

    public:
        explicit Login(QWidget *parent, Profile *pro);
        ~Login();

    signals:

    public slots:

private slots:
    void on_pushButton_clicked();

private:
        Ui::LoginForm *ui;
        int us;
        Profile *profile;
};

