#pragma once
#include "ui_maintenanceform.h"

namespace Ui {
class MaintenanceForm;
}

class Maintenance : public QWidget
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = nullptr);
    ~Maintenance();

private:
    Ui::MaintenanceForm *ui;
};
