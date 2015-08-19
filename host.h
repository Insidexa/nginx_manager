#ifndef HOST_H
#define HOST_H

#include <QString>
#include <QMap>
#include <QObject>

struct listHosts {
    int id;
    QString tpl;
    QString host;
    QString fileName;
    QString index;
    QString root;
    int port;
};

class Host : public QObject
{
    Q_OBJECT

public:

    void addVHost(listHosts host);
    void deleteVHost(QString host);
    void editVHost(QString host, listHosts newValueHost);

    QMap<QString, listHosts> map;

signals:

    void msbBox(QString host);

};

#endif // HOST_H
