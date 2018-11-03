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
        void pullMessages();
        void sendMessage(char message, int uid);
        ~Messages();

    signals:

    public slots:

    private:
        Ui::MessagesForm *ui;
};

