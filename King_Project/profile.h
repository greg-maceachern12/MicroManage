#pragma once
#include "ui_profileform.h"
#include <QtWidgets>
<<<<<<< HEAD
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>
=======
>>>>>>> 403637e7d6436b901e42f77943e353e27164e7f8

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



    private:
        QToolButton *editButton;
        Ui::ProfileForm *ui;

};

