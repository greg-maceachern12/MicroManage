#pragma once
#include "ui_messagesform.h"
#include <QtWidgets>

namespace Ui {
    class MessagesForm;
}
class Messages : public QWidget {
        Q_OBJECT

    public:
        explicit Messages(QWidget *parent);
        QToolButton* getMenuButton();
        ~Messages();

    signals:

    public slots:

    private:
        Ui::MessagesForm *ui;
};

