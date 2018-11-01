#pragma once
#include "ui_welcomeform.h"
#include <QtWidgets>

namespace Ui {
class WelcomeForm;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private:
    Ui::WelcomeForm *ui;
};

