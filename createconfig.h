#ifndef CREATECONFIG_H
#define CREATECONFIG_H

#include <QWidget>

#include <QProcess>

namespace Ui {
class CreateConfig;
}

class CreateConfig : public QWidget
{
    Q_OBJECT

public:
    explicit CreateConfig(QWidget *parent = 0);
    ~CreateConfig();

private slots:
    void on_creteCfg_clicked();

private:
    Ui::CreateConfig *ui;

    QString createCfg (QString text, QString fileName);
    QProcess *process;
    QString tpl = "server {\r\n"
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
    "}\r\n";
};

#endif // CREATECONFIG_H
