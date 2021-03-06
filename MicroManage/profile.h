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
#include "dbmodel.h"


namespace Ui {
    class ProfileForm;
}

class Profile : public QWidget {
        Q_OBJECT

    public:
        explicit Profile(QStatusBar *status_bar, QWidget *parent = nullptr);
        void updateProfile();
        Ui::ProfileForm* getUi();
        QToolButton* getMenuButton();
        ~Profile();


    public slots:
        void makeEditable();
        void refresh();



private slots:
        void on_changePhotoButton_clicked();

private:
        Ui::ProfileForm *ui;
        QStatusBar *statusBar;

};

