#pragma once
#include "ui_mainpageform.h"
#include "dbmodel.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually
#include <string>

using namespace std;

namespace Ui {
    class MainPageForm;
}

class MainPage : public QWidget {
        Q_OBJECT

    public:
        explicit MainPage(QWidget *parent, QString user_name="", int user_role=0);
        QToolButton* getMenuButton();
        ~MainPage();

    signals:

    public slots:
        void handleButtonClick(int);

    private:
        Ui::MainPageForm *ui;
        QString userName;
        int userRole;

};
