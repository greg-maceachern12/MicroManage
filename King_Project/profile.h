#pragma once
#include "ui_profileform.h"
//#include "micromanage.h"
#include <QtWidgets>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>

namespace Ui {
    class ProfileForm;
}

class Profile : public QWidget {
        Q_OBJECT

    public:
        explicit Profile(QWidget *parent = nullptr);
        ~Profile();


    public slots:
        void makeEditable();
        void refresh();



    private:
        QToolButton *editButton;
        Ui::ProfileForm *ui;

};

