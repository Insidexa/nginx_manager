/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabAllHosts;
    QGridLayout *gridLayout_3;
    QVBoxLayout *lay_host;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListView *lv_available;
    QListView *lv_enabled;
    QPlainTextEdit *ptHosts;
    QLabel *label_11;
    QPushButton *pbSaveHosts;
    QWidget *tabCreate;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *leFileName;
    QLabel *label_4;
    QLineEdit *lePort;
    QLabel *label_5;
    QLineEdit *leHost;
    QLabel *label_6;
    QLineEdit *leRoot;
    QLabel *label_7;
    QLineEdit *leIndex;
    QVBoxLayout *verticalLayout_2;
    QPushButton *createVHost;
    QLabel *label_9;
    QListWidget *lwQueue;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QPlainTextEdit *ptEdit;
    QPushButton *pbSaveAdvanced;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pbStart;
    QWidget *taLog;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QTextEdit *teLog;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label_15;
    QLineEdit *lineEdit_4;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(774, 467);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        Widget->setFont(font);
        Widget->setMouseTracking(false);
        Widget->setLayoutDirection(Qt::LeftToRight);
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QLatin1String("QPushButton {\n"
"	color:#333;\n"
"	background-color: white;\n"
"}\n"
"QPushButton:hover {\n"
"	border-radius: 3px;\n"
"	color: white;\n"
"	border: 2px solid rgb(7, 80, 40);\n"
"	background-color: #333;\n"
"}\n"
"\n"
"#label {\n"
"	color: white;\n"
"}\n"
"\n"
"QListView {\n"
"margin: 2px;\n"
"width: 100%;\n"
"}"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabAllHosts = new QWidget();
        tabAllHosts->setObjectName(QStringLiteral("tabAllHosts"));
        gridLayout_3 = new QGridLayout(tabAllHosts);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lay_host = new QVBoxLayout();
        lay_host->setSpacing(6);
        lay_host->setObjectName(QStringLiteral("lay_host"));
        lay_host->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        label_2 = new QLabel(tabAllHosts);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(tabAllHosts);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        lay_host->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        lv_available = new QListView(tabAllHosts);
        lv_available->setObjectName(QStringLiteral("lv_available"));

        horizontalLayout->addWidget(lv_available);

        lv_enabled = new QListView(tabAllHosts);
        lv_enabled->setObjectName(QStringLiteral("lv_enabled"));

        horizontalLayout->addWidget(lv_enabled);


        lay_host->addLayout(horizontalLayout);


        gridLayout_3->addLayout(lay_host, 0, 0, 1, 1);

        ptHosts = new QPlainTextEdit(tabAllHosts);
        ptHosts->setObjectName(QStringLiteral("ptHosts"));

        gridLayout_3->addWidget(ptHosts, 2, 0, 1, 1);

        label_11 = new QLabel(tabAllHosts);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        pbSaveHosts = new QPushButton(tabAllHosts);
        pbSaveHosts->setObjectName(QStringLiteral("pbSaveHosts"));

        gridLayout_3->addWidget(pbSaveHosts, 3, 0, 1, 1);

        tabWidget->addTab(tabAllHosts, QString());
        tabCreate = new QWidget();
        tabCreate->setObjectName(QStringLiteral("tabCreate"));
        gridLayout_5 = new QGridLayout(tabCreate);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(tabCreate);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        leFileName = new QLineEdit(tabCreate);
        leFileName->setObjectName(QStringLiteral("leFileName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leFileName);

        label_4 = new QLabel(tabCreate);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lePort = new QLineEdit(tabCreate);
        lePort->setObjectName(QStringLiteral("lePort"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lePort);

        label_5 = new QLabel(tabCreate);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        leHost = new QLineEdit(tabCreate);
        leHost->setObjectName(QStringLiteral("leHost"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leHost);

        label_6 = new QLabel(tabCreate);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        leRoot = new QLineEdit(tabCreate);
        leRoot->setObjectName(QStringLiteral("leRoot"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leRoot);

        label_7 = new QLabel(tabCreate);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        leIndex = new QLineEdit(tabCreate);
        leIndex->setObjectName(QStringLiteral("leIndex"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leIndex);


        verticalLayout->addLayout(formLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        createVHost = new QPushButton(tabCreate);
        createVHost->setObjectName(QStringLiteral("createVHost"));

        verticalLayout_2->addWidget(createVHost);

        label_9 = new QLabel(tabCreate);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        lwQueue = new QListWidget(tabCreate);
        lwQueue->setObjectName(QStringLiteral("lwQueue"));

        verticalLayout_2->addWidget(lwQueue);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_10 = new QLabel(tabCreate);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_10);

        ptEdit = new QPlainTextEdit(tabCreate);
        ptEdit->setObjectName(QStringLiteral("ptEdit"));

        verticalLayout_3->addWidget(ptEdit);

        pbSaveAdvanced = new QPushButton(tabCreate);
        pbSaveAdvanced->setObjectName(QStringLiteral("pbSaveAdvanced"));

        verticalLayout_3->addWidget(pbSaveAdvanced);


        gridLayout_5->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pbStart = new QPushButton(tabCreate);
        pbStart->setObjectName(QStringLiteral("pbStart"));

        verticalLayout_4->addWidget(pbStart);


        gridLayout_5->addLayout(verticalLayout_4, 1, 0, 1, 2);

        tabWidget->addTab(tabCreate, QString());
        taLog = new QWidget();
        taLog->setObjectName(QStringLiteral("taLog"));
        gridLayout_7 = new QGridLayout(taLog);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(taLog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        teLog = new QTextEdit(taLog);
        teLog->setObjectName(QStringLiteral("teLog"));

        gridLayout_6->addWidget(teLog, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(taLog, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_14);

        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, pushButton_2);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_15);

        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_4);


        gridLayout_4->addLayout(formLayout_2, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_4->addWidget(plainTextEdit, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Virtual host manager for EngineX", 0));
        label_2->setText(QApplication::translate("Widget", "Sites available", 0));
        label->setText(QApplication::translate("Widget", "Sites enabled", 0));
        label_11->setText(QApplication::translate("Widget", "/etc/hosts", 0));
        pbSaveHosts->setText(QApplication::translate("Widget", "Save /etc/hosts", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAllHosts), QApplication::translate("Widget", "Hosts", 0));
        label_3->setText(QApplication::translate("Widget", "fileName", 0));
        label_4->setText(QApplication::translate("Widget", "Port", 0));
        label_5->setText(QApplication::translate("Widget", "Host", 0));
        label_6->setText(QApplication::translate("Widget", "Root", 0));
        label_7->setText(QApplication::translate("Widget", "Index", 0));
        createVHost->setText(QApplication::translate("Widget", "AddHost to Queue", 0));
        label_9->setText(QApplication::translate("Widget", "Queue list", 0));
        label_10->setText(QApplication::translate("Widget", "Advanced edit virtual host", 0));
        pbSaveAdvanced->setText(QApplication::translate("Widget", "Save advanced", 0));
        pbStart->setText(QApplication::translate("Widget", "Start", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabCreate), QApplication::translate("Widget", "Create host", 0));
        label_8->setText(QApplication::translate("Widget", "Log", 0));
        tabWidget->setTabText(tabWidget->indexOf(taLog), QApplication::translate("Widget", "Log", 0));
        label_12->setText(QApplication::translate("Widget", "Path nginx available", 0));
        label_13->setText(QApplication::translate("Widget", "Path nginx enabled", 0));
        label_14->setText(QApplication::translate("Widget", "Path /etc/hosts", 0));
        pushButton_2->setText(QApplication::translate("Widget", "Save settings", 0));
        label_15->setText(QApplication::translate("Widget", "Path to template nginx conf", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
