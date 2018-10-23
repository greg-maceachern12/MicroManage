#pragma once
#include "ui_propertymain.h"
#include <QtWidgets>

namespace Ui {
    class PropertyMain;
}
class PropertyMain : public QWidget
{
    Q_OBJECT

public:
    explicit PropertyMain(QWidget *parent);

signals:

public slots:

private:
    Ui::PropertyMain *ui;
    //int userRole;
};

