#pragma once
#include "ui_messagesform.h"
#include <QtWidgets>

namespace Ui {
    class MessagesForm;
}
class Messages : public QWidget {
        Q_OBJECT

    public:
        explicit Messages(QWidget *parent, QStatusBar *status_bar);
        QToolButton* getMenuButton();
        void pullMessages();
        void sendMessage(char message, int uid);


        ~Messages();

    signals:

    private slots:
        void on_send_clicked();
        void refreshMessages();

    private:
        Ui::MessagesForm *ui;
        QStatusBar *statusBar;
};

