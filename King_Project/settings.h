#pragma once
#include "ui_settingsform.h"
#include <QtWidgets>

namespace Ui {
    class SettingsForm;
}

class Settings : public QWidget {
        Q_OBJECT

    public:
        explicit Settings(QWidget *parent);
        ~Settings();

    signals:

    public slots:

    private:
        Ui::SettingsForm *ui;
};
