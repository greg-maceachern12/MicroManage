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
        void pullMessages();
        void sendMessage(char message, int uid);

        ~Messages();

    signals:

    private slots:
        void on_refresh_clicked();
        void on_send_clicked();

    private:
        Ui::MessagesForm *ui;
};
