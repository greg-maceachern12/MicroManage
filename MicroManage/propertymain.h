#pragma once
#include "ui_propertymainform.h"
#include <QtWidgets>

namespace Ui {
    class PropertyMainForm;
}

class PropertyMain : public QWidget {
        Q_OBJECT

    public:
        explicit PropertyMain(QWidget *parent);
        QToolButton* getMenuButton();
        ~PropertyMain();

    signals:

    public slots:

    private:
        Ui::PropertyMainForm *ui;
};

