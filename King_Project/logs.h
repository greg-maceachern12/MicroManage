#pragma once
#include "ui_logsform.h"
#include <QtWidgets>

namespace Ui {
    class LogsForm;
}

class logs : public QWidget {
        Q_OBJECT

    public:
        explicit logs(QWidget *parent = nullptr);
        virtual ~logs();

    private:
        Ui::LogsForm *ui;
};

