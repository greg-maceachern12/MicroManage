#pragma once
#include "ui_profileform.h"
#include <QtWidgets>

namespace Ui {
    class ProfileForm;
}

class Profile : public QWidget {
        Q_OBJECT

    public:
        explicit Profile(QWidget *parent = nullptr);
        ~Profile();


    public slots:
        void makeEditable();



    private:
        QToolButton *editButton;
        Ui::ProfileForm *ui;

};

