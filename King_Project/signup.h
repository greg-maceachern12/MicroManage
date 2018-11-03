#pragma once
#include "ui_signupform.h"
#include <QtWidgets> // NOTE: This should be here so you don't have to include each type of widget individually

namespace Ui {
    class SignUpForm;
}

class SignUp : public QWidget
{
        Q_OBJECT

    public:
        explicit SignUp(QWidget *parent);
        ~SignUp();

    signals:

    public slots:

    private:
        Ui::SignUpForm *ui;
};
