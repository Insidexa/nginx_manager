#include "createconfig.h"

#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QProcess>

CreateConfig::CreateConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateConfig)
{
    ui->setupUi(this);
}

CreateConfig::~CreateConfig()
{
    delete ui;
}

QString CreateConfig::createCfg (QString text, QString fileName) {
    QString filename = "/etc/nginx/sites-available/" + fileName;
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << text << endl;

        file.close ();

        return fileName;
    }

    return "";
}

void CreateConfig::on_creteCfg_clicked()
{
    QString port = ui->port->text ();
    QString host = ui->host->text ();
    QString root = ui->root->text ();
    QString index = ui->index->text ();
    QString fileName = ui->fileName->text ();
    QString cfg = this->tpl;

    cfg.replace (QString("~port~"), port);
    cfg.replace (QString("~host~"), host);
    cfg.replace (QString("~root~"), root);
    cfg.replace (QString("~index~"), index);

    qDebug() << cfg;

    QString path = this->createCfg (cfg, fileName);

    if (path.length () > 10) {
        this->process = new QProcess;
        QProcess *ln = new QProcess;
        qDebug() << path;
        ln->start ("ln", QStringList() <<  "-s" << path << "/etc/nginx/sites-enabled/" + fileName);
        ln->waitForFinished ();
        qDebug() << ln->readAllStandardOutput ();
        ln->close ();

        this->process->start ("service", QStringList() << "nginx" << "restart");
        qDebug() << this->process->readAllStandardOutput ();
        ln->waitForFinished ();
        this->process->close ();

        QWidget::hide ();
    }
}
