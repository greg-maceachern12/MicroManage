#pragma once
#include "ui_login.h"
#include <QtWidgets>

namespace Ui {
    class Login;
}
class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent);

signals:

public slots:

private:
    Ui::Login *ui;
    //int userRole;
};

