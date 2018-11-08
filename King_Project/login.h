#pragma once
#include "ui_loginform.h"
#include "dbmodel.h"
//#include "micromanage.h"
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

private slots:
    void on_pushButton_clicked();

private:
        Ui::LoginForm *ui;
        int us;
//        QWidget* mainParent;
};

