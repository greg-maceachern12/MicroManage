#pragma once
#include "ui_settings.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually

namespace Ui {
    class Settings;
}

class Settings : public QWidget
{
        Q_OBJECT

    public:
        explicit Settings(QWidget *parent);

    signals:

    public slots:

    private:
        Ui::Settings *ui;
        //int userRole;
};
