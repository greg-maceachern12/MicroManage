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
        void changePage(int);
        //~MicroManage() override; Probably don't need this because it already inherits the destructor from QMainWindow

    signals:

    public slots:
        //void changePage(int index);
        void showSideMenu();

    private:
        Ui::MicroManage *ui;
        QDockWidget *sideMenu;
        QStackedWidget *stackedWidget;
        MainPage *mainPage;
        void createInterface();
        void closeEvent(QCloseEvent *event);

};

