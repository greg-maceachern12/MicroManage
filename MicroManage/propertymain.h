#pragma once
#include "ui_propertymainform.h"
#include <QtWidgets>
#include "propdialog.h"

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
        void addProperty(QString thisAddress, QString numTenants);
        void deleteOne(QWidget* property);
        void add();

    private:
        propDialog* son;
        QWidget* widget;
        Ui::PropertyMainForm *ui;
        QGraphicsPixmapItem* item;
        QGraphicsScene* scene;
        QVBoxLayout* propertyLayout;
};

