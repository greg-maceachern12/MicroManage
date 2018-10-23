#pragma once
#include "ui_messagesform.h"
#include <QtWidgets>

namespace Ui {
    class Messages;
}
class Messages : public QWidget
{
    Q_OBJECT

public:
    explicit Messages(QWidget *parent);

signals:

public slots:

private:
    Ui::Messages *ui;
    //int userRole;
};

