#pragma once
#include "ui_mainpageform.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually

namespace Ui {
    class MainPage;
}

class MainPage : public QWidget
{
        Q_OBJECT

    public:
        explicit MainPage(QWidget *parent);

    signals:

    public slots:
        void changeText();

    private:
        Ui::MainPage *ui;
        //int userRole;
};
