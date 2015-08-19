#include "widget.h"
#include "ui_widget.h"

#include "listeners.h"

#include <QApplication>

#include <QMessageBox>
#include <QtDebug>

#include <QDate>
#include <QTime>

#include <QAction>
#include <QMenu>
#include <QMenuBar>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);

    this->model_available = new QStringListModel(this);
    this->model_enabled = new QStringListModel(this);

    this->dir_available = new QDir;
    this->dir_enabled = new QDir;

    host = new Host;

    //    QMenuBar* menuBar = new QMenuBar();
    //    QMenu *fileMenu = new QMenu("File");
    //    menuBar->addMenu(fileMenu);
    //    QAction *save = fileMenu->addAction("Save");
    //    fileMenu->addAction("Exit");

    //    connect(save, SIGNAL(triggered()), this, SLOT(showMaximized()) );

    //    ui->gridLayout_2->addWidget (menuBar);

    Widget::connect( host, SIGNAL(msbBox(QString)), this, SLOT(ok(QString)) );
    Widget::connect (this, SIGNAL(siInformation(QString)), this, SLOT(slInformation(QString)) );

    this->init ();
}

void Widget::list () {
    QStringList listView_available;
    QStringList listView_enabled;

    this->dir_available->setFilter(QDir::Files | QDir::NoSymLinks);
    this->dir_available->setSorting(QDir::Size | QDir::Reversed);
    this->dir_enabled->setFilter(QDir::Files | QDir::Hidden);
    this->dir_enabled->setSorting(QDir::Size | QDir::Reversed);

    this->dir_available->setPath("/etc/nginx/sites-available");
    this->dir_enabled->setPath("/etc/nginx/sites-enabled");

    QFileInfoList list_available = this->dir_available->entryInfoList();
    QFileInfoList list_enabled = this->dir_enabled->entryInfoList();

    for (int i = 0; i < list_available.size(); ++i) {
        QFileInfo fileInfo = list_available.at(i);
        listView_available << fileInfo.fileName();
    }

    for (int i = 0; i < list_enabled.size(); ++i) {
        QFileInfo fileInfo = list_enabled.at(i);
        listView_enabled << fileInfo.fileName();
    }

    this->model_available->setStringList (listView_available);
    this->model_enabled->setStringList (listView_enabled);

    ui->lv_available->setEditTriggers (QAbstractItemView::NoEditTriggers);
    ui->lv_enabled->setEditTriggers (QAbstractItemView::NoEditTriggers);

    ui->lv_available->setModel(model_available);
    ui->lv_enabled->setModel(model_enabled);

    this->slInformation ("Load list");
}

void Widget::init () {

    //qDebug() << QDate::currentDate ().toString ();

    this->currentTime = QTime::currentTime ().toString (Qt::TextDate);

    this->siInformation ("App run as root");

    QFile fil_read( QDir::currentPath () + "/template.conf");

    if(!fil_read.open(QIODevice::ReadOnly))
    {
        qDebug() << "error opening file: " << fil_read.errorString ();
    }

    fil_read.open(QIODevice::ReadOnly);
    QByteArray array = fil_read.readAll();

    this->tpl = array;

    this->loadHosts ();

    this->list ();

}

Widget::~Widget()
{
    delete ui;
}

QString Widget::createCfg (QString text, QString fileName) {
    QString filename = "/etc/nginx/sites-available/" + fileName;
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << text << endl;

        file.close ();

        emit siInformation ("Create file " + fileName);

        return fileName;
    }

    return "";
}

void Widget::loadHosts () {

    QFile fil_read( "/etc/hosts" );

    if(!fil_read.open(QIODevice::ReadOnly))
    {
        qDebug() << "error opening file: " << fil_read.errorString ();
    }

    fil_read.open(QIODevice::ReadOnly);
    QByteArray array = fil_read.readAll();

    ui->ptHosts->insertPlainText(array);
}

void Widget::ok (QString host) {
    this->currentHost = host;
    ui->lwQueue->addItem (this->currentHost);
    qDebug() << Q_FUNC_INFO << host;
}

void Widget::restartNginx () {
    this->nginx = new QProcess;
    this->nginx->start ("service", QStringList() << "nginx" << "restart");
    this->nginx->waitForFinished ();
    this->nginx->close ();

    emit siInformation ("Nginx restart");
}

void Widget::slInformation (QString message) {

    ui->teLog->append ("[ " + this->currentTime + " ]: " + " " + message);

}

void Widget::on_pbSaveHosts_clicked()
{
    QString textHosts = ui->ptHosts->toPlainText ();

    QFile file( "/etc/hosts" );
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << textHosts << endl;

        file.close ();

        emit siInformation ("Hosts saved");
    } else {
        this->slInformation ("/etc/hosts failed open. problem ?");
    }
}
