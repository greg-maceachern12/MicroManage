#pragma once
#include "ui_logsform.h"
#include "dbmodel.h"
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>

namespace Ui {
    class LogsForm;
}

class Logs : public QWidget {
        Q_OBJECT

    public:
        explicit Logs(QWidget *parent);
        ~Logs();

public slots:
    void refreshLogs();

    private:
        Ui::LogsForm *ui;
};

