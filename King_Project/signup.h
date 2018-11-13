#pragma once
#include "ui_signupform.h"
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
        explicit SignUp(QWidget *parent);
        ~SignUp();

    signals:

    public slots:
    void createUser();

    private:
        Ui::SignUpForm *ui;
};
