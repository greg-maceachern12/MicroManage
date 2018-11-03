#pragma once
#include "ui_helpform.h"
#include <QtWidgets>

namespace Ui {
    class HelpForm;
}

class Help : public QWidget {
        Q_OBJECT

    public:
        explicit Help(QWidget *parent = nullptr);
        ~Help();

    private:
        Ui::HelpForm *ui;
};

