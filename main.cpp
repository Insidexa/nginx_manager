#include "widget.h"

#include <QApplication>
#include <QDebug>

#include <unistd.h>

int main(int argc, char *argv[])
{
    //qDebug() << getuid ();
    //    if (getuid() == 0){
    //        QApplication a(argc, argv);
    //        Widget w;
    //        w.show();

    //        return a.exec();
    //    } else {
    //        qDebug() << "You are not is root! Use sudo";
    //    }

    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
