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
        QToolButton* getMenuButton();
        ~Settings();

    signals:

    public slots:
        void emailLink();

    private:
        Ui::SettingsForm *ui;
};
