#pragma once
#include "ui_logsform.h"
#include <QtWidgets>

namespace Ui {
    class logs;
}

class logs : public QWidget {
        Q_OBJECT

    public:
        explicit logs(QWidget *parent = nullptr);
        ~logs();

    private:
        Ui::logs *ui;
};

