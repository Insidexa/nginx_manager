#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDir>
#include <QStringListModel>
#include <QProcess>
#include <QListWidgetItem>

#include <host.h>

namespace Ui {

class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:


private:
    Ui::Widget *ui;

    void init();
    void list ();
    void deleteConfig();
    void restartNginx();
    void deleteHost();
    void addHost();

    void loadHosts();

    void keyPressEvent (QKeyEvent *event);

    QString createCfg (QString text, QString fileName);

    QStringListModel *model_available;
    QStringListModel *model_enabled;

    QString currentHost;

    QString currentTime;

    QProcess *nginx;

    Host *host;

    QDir *dir_available;
    QDir *dir_enabled;

    QString tpl; /*"server {\r\n"
            "\tlisten ~port~;\r\n"
            "\r\n"
            "\tserver_name ~host~;\r\n"
            "\r\n"
            "\troot ~root~;\r\n"
            "\tindex ~index~;\r\n"
            "\r\n"
            "\tlocation / {\r\n"
                 "\t\ttry_files $uri $uri/ /index.php$is_args$args;\r\n"
            "\t}\r\n"

            "\t# pass the PHP scripts to FastCGI server listening on /var/run/php5-fpm.sock\r\n"
            "\tlocation ~ \.php$ {\r\n"
                    "\t\ttry_files $uri /index.php =404;\r\n"
                    "\t\t#fastcgi_pass unix:/var/run/php5-fpm.sock;\r\n"
                    "\t\tfastcgi_pass 127.0.0.1:9000;\r\n"
                    "\t\tfastcgi_index index.php;\r\n"
                    "\t\tfastcgi_param SCRIPT_FILENAME $document_root$fastcgi_script_name;\r\n"
                    "\t\tinclude fastcgi_params;\r\n"
            "\t}\r\n"
    "}\r\n";*/

private slots:

    void on_lv_available_doubleClicked(const QModelIndex &index);
    void on_createVHost_clicked();

    void on_lwQueue_itemDoubleClicked(QListWidgetItem *item);

    void on_pbSaveAdvanced_clicked();

    void on_pbStart_clicked();

    void on_pbSaveHosts_clicked();

public slots:
    void slInformation(QString message);
    void ok(QString host);

signals:
    void siInformation(QString message);
};

#endif // WIDGET_H
