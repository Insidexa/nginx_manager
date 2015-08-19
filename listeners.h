#ifndef LISTENERS
#define LISTENERS

#include <widget.h>
#include <ui_widget.h>

#include <QMessageBox>
#include <QProcess>
#include <QDebug>

#include <QKeyEvent>

void Widget::on_lv_available_doubleClicked(const QModelIndex &index)
{
    QModelIndexList list = ui->lv_available->selectionModel ()->selectedIndexes ();

    QStringList slist;
    foreach(const QModelIndex &index, list) {
        slist.append( index.data(Qt::DisplayRole ).toString());
    }
    QString item = slist.join(",");

    QMessageBox msgBox;
    msgBox.setText("Delete " + item + "conf\r\n" + "from available and enabled ?");
    QAbstractButton *myYesButton = msgBox.addButton(trUtf8("Yes"), QMessageBox::YesRole);
    msgBox.addButton(trUtf8("No"), QMessageBox::NoRole);
    msgBox.exec ();

    if (msgBox.clickedButton ()== myYesButton) {

        QProcess *deleteItem = new QProcess;
        deleteItem->start ("rm", QStringList() << "/etc/nginx/sites-available/" + item);
        deleteItem->waitForFinished ();
        deleteItem->close ();

        deleteItem->start ("rm", QStringList() << "/etc/nginx/sites-enabled/" + item);
        deleteItem->waitForFinished ();
        deleteItem->close ();

        deleteItem->start ("service", QStringList() << "nginx" << "restart");
        deleteItem->waitForFinished ();
        deleteItem->close ();

        this->list ();

        emit siInformation ("Delete host " + item + "\r\n" + "Remove symlink /etc/nginx/sites-enabled/" + item);

        QMessageBox::information(
                    this,
                    tr("Application message"),
                    "Deleted " + item );

    }
}

void Widget::keyPressEvent (QKeyEvent *event) {

    if (event->key () & Qt::Key_D) {

        QString item = ui->lwQueue->currentItem ()->text ();

        if (item != "") {
            QMessageBox msgBox;
            msgBox.setText("Delete " + item + " from queue");
            QAbstractButton *myYesButton = msgBox.addButton(trUtf8("Yes"), QMessageBox::YesRole);
            msgBox.addButton(trUtf8("No"), QMessageBox::NoRole);
            msgBox.exec ();

            if (msgBox.clickedButton ()== myYesButton) {

                ui->lwQueue->removeItemWidget (ui->lwQueue->currentItem ());

                this->slInformation ("Delete " + item + " from queue");

                QMessageBox::information(
                            this,
                            tr("Application message"),
                            "Deleted " + item + " from queue" );

            }
        }
    }

}

void Widget::on_createVHost_clicked()
{
    QString fileName = ui->leFileName->text ();
    QString host = ui->leHost->text ();
    int port = ui->lePort->text ().toInt ();
    QString index = ui->leIndex->text ();
    QString root = ui->leRoot->text ();

    if ( (fileName.isEmpty ())
         || (host.isEmpty ())
         || (port < 1 )
         || (index.isEmpty ())
         || (root.isEmpty ())) {
        QMessageBox::information(
                    this,
                    tr("Application message"),
                    "Input empty" );
    }

    listHosts vhost;
    QString cfg = this->tpl;
    vhost.fileName = fileName;
    vhost.host = host;
    vhost.port = port;
    vhost.index = index;
    vhost.root = root;

    cfg.replace (QString("~port~"), QString::number(vhost.port));
    cfg.replace (QString("~host~"), vhost.host);
    cfg.replace (QString("~root~"), vhost.root);
    cfg.replace (QString("~index~"), vhost.index);

    vhost.tpl = cfg;

    this->host->addVHost (vhost);

    ui->leFileName->clear ();
    ui->leHost->clear ();
    ui->lePort->clear ();
    ui->leIndex->clear ();
    ui->leRoot->clear ();

    this->slInformation ("Add " + host);

    qDebug() << Q_FUNC_INFO << this->host->map[vhost.host].host;
}

void Widget::on_lwQueue_itemDoubleClicked(QListWidgetItem *item)
{
    qDebug() << Q_FUNC_INFO;
    ui->ptEdit->insertPlainText (this->host->map[item->text ()].tpl);
}

void Widget::on_pbSaveAdvanced_clicked()
{
    if ( ui->ptEdit->toPlainText ().length () < 10) {
        QMessageBox::information(
                    this,
                    tr("Application message"),
                    "Nginx conf empty" );
    }

    this->host->map[this->currentHost].tpl = ui->ptEdit->toPlainText ();
    ui->ptEdit->clear ();
    qDebug() << Q_FUNC_INFO;
}

void Widget::on_pbStart_clicked()
{

    QMap<QString, listHosts>::iterator i;

    if ( this->host->map.isEmpty ()) {
        QMessageBox::information(
                    this,
                    tr("Application message"),
                    "Empty queue" );
    }

    for (i = this->host->map.begin(); i != this->host->map.end(); ++i) {

        this->createCfg (i.value ().tpl, i.value ().fileName);
        QProcess *ln = new QProcess;
        ln->start ("ln", QStringList() << "-s"
                   << "/etc/nginx/sites-available/" + i.value ().fileName
                   << "/etc/nginx/sites-enabled/" + i.value ().fileName );
        ln->waitForFinished ();
        ln->close ();

        QFile *file = new QFile("/etc/hosts");
        file->open (QIODevice::WriteOnly | QIODevice::Append);
        QTextStream stream( file );
        stream << "127.0.0.1\t" + i.value ().host << endl;
        file->close ();

        delete file;
        delete ln;

        emit siInformation ("Create file " + i.value ().host);

    }

    this->restartNginx ();

    this->list ();

}



#endif // LISTENERS

