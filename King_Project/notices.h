#pragma once
#include "ui_noticesform.h"
#include <QtWidgets>

namespace Ui {
    class NoticesForm;
}

class Notices : public QWidget {
        Q_OBJECT

    public:
        explicit Notices(QWidget *parent = nullptr);
        QToolButton* getMenuButton();
        ~Notices();

    private:
        Ui::NoticesForm *ui;
};

