#pragma once
#include "ui_micromanageform.h"
#include "mainpage.h"

namespace Ui {
    class MicroManage;
}

class MicroManage : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MicroManage(QWidget *parent = nullptr);
        //~MicroManage() override; Probably don't need this because it already inherits the destructor from QMainWindow

    public slots:
        void changePage();
        void showSideMenu();

    private:
        Ui::MicroManage *ui;
        QDockWidget *sideMenu;
        QStackedWidget *stackedWidget;
        MainPage *mainPage;
        void createInterface();

};

