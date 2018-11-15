#pragma once
#include "ui_maintenanceform.h"
#include <QtWidgets>

namespace Ui {
    class MaintenanceForm;
}

class Maintenance : public QWidget {
        Q_OBJECT

    public:
        explicit Maintenance(QWidget *parent = nullptr);
        QToolButton* getMenuButton();
        ~Maintenance();

    private:
        Ui::MaintenanceForm *ui;
};
