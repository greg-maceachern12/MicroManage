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

    public slots:
        void refreshLogs();

private slots:
        void on_newRow_clicked();

private:
        Ui::MaintenanceForm *ui;

};
