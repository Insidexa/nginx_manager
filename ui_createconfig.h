/********************************************************************************
** Form generated from reading UI file 'createconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECONFIG_H
#define UI_CREATECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateConfig
{
public:
    QLineEdit *root;
    QLineEdit *fileName;
    QLineEdit *index;
    QLabel *label_5;
    QLineEdit *host;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *port;
    QLabel *label_2;
    QPushButton *creteCfg;
    QLabel *label;

    void setupUi(QWidget *CreateConfig)
    {
        if (CreateConfig->objectName().isEmpty())
            CreateConfig->setObjectName(QStringLiteral("CreateConfig"));
        CreateConfig->resize(673, 197);
        CreateConfig->setMaximumSize(QSize(673, 197));
        root = new QLineEdit(CreateConfig);
        root->setObjectName(QStringLiteral("root"));
        root->setGeometry(QRect(86, 106, 108, 23));
        fileName = new QLineEdit(CreateConfig);
        fileName->setObjectName(QStringLiteral("fileName"));
        fileName->setGeometry(QRect(86, 19, 108, 23));
        index = new QLineEdit(CreateConfig);
        index->setObjectName(QStringLiteral("index"));
        index->setGeometry(QRect(86, 135, 108, 23));
        label_5 = new QLabel(CreateConfig);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(29, 19, 51, 16));
        host = new QLineEdit(CreateConfig);
        host->setObjectName(QStringLiteral("host"));
        host->setGeometry(QRect(86, 77, 108, 23));
        label_3 = new QLabel(CreateConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(29, 106, 25, 16));
        label_4 = new QLabel(CreateConfig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(29, 135, 30, 16));
        port = new QLineEdit(CreateConfig);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(86, 48, 108, 23));
        label_2 = new QLabel(CreateConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(29, 77, 26, 16));
        creteCfg = new QPushButton(CreateConfig);
        creteCfg->setObjectName(QStringLiteral("creteCfg"));
        creteCfg->setGeometry(QRect(86, 164, 80, 23));
        label = new QLabel(CreateConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(29, 48, 25, 16));

        retranslateUi(CreateConfig);

        QMetaObject::connectSlotsByName(CreateConfig);
    } // setupUi

    void retranslateUi(QWidget *CreateConfig)
    {
        CreateConfig->setWindowTitle(QApplication::translate("CreateConfig", "Create site config", 0));
        label_5->setText(QApplication::translate("CreateConfig", "fileName", 0));
        label_3->setText(QApplication::translate("CreateConfig", "root", 0));
        label_4->setText(QApplication::translate("CreateConfig", "index", 0));
        label_2->setText(QApplication::translate("CreateConfig", "host", 0));
        creteCfg->setText(QApplication::translate("CreateConfig", "PushButton", 0));
        label->setText(QApplication::translate("CreateConfig", "port", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateConfig: public Ui_CreateConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECONFIG_H
