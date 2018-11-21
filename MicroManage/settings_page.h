#pragma once
#include "ui_SettingsPageForm.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually

namespace Ui {
    class SettingsPage;
}

class SettingsPage : public QWidget
{
        Q_OBJECT

    public:
        explicit SettingsPage(QWidget *parent);

    signals:

    public slots:
        void changeText();

    private:
        Ui::SettingsPage *ui;
        //int userRole;
};
