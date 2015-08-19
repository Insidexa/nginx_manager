#ifndef CREATE_H
#define CREATE_H

#include <QWidget>

namespace Ui {
class create;
}

class create : public QWidget
{
    Q_OBJECT

public:
    explicit create(QWidget *parent = 0);
    ~create();

private:
    Ui::create *ui;
};

#endif // CREATE_H
