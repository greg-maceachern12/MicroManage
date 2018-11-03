#pragma once
#include "ui_loginform.h"
#include <QtWidgets>

namespace Ui {
    class LoginForm;
}

class Login : public QWidget {
        Q_OBJECT

    public:
        explicit Login(QWidget *parent);
        ~Login();

    signals:

    public slots:

    private:
        Ui::LoginForm *ui;
};

