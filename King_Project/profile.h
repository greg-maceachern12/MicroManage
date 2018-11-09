#pragma once
#include "ui_profileform.h"
#include <QtWidgets>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>
#include "dbmodel.h"


namespace Ui {
    class ProfileForm;
}

class Profile : public QWidget {
        Q_OBJECT

    public:
        explicit Profile(QWidget *parent = nullptr);
        void updateProfile(QSqlQuery query);
        Ui::ProfileForm* getUi();
        ~Profile();


    public slots:
        void makeEditable();



    private:
        QToolButton *editButton;
        Ui::ProfileForm *ui;

};

