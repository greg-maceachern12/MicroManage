#ifndef PROPERTYBUTTON_H
#define PROPERTYBUTTON_H

#include <QPushButton>
class propertybutton: public QPushButton
{
    Q_OBJECT
public:
    propertybutton(QWidget* parent);

signals:
    void remove(QWidget* temp);

public slots:
    void removeOne();

private:
    QWidget* itsparent;
};

#endif // PROPERTYBUTTON_H
