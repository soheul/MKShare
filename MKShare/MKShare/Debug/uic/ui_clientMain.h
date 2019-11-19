/********************************************************************************
** Form generated from reading UI file 'clientMain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMAIN_H
#define UI_CLIENTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientMain
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *clientMain)
    {
        if (clientMain->objectName().isEmpty())
            clientMain->setObjectName(QStringLiteral("clientMain"));
        clientMain->resize(708, 502);
        centralWidget = new QWidget(clientMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 691, 431));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 381, 16));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 671, 201));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 651, 171));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 671, 201));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 50, 75, 23));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 56, 12));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 50, 301, 20));
        groupBox_3->raise();
        label->raise();
        groupBox_2->raise();
        clientMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(clientMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 708, 21));
        clientMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(clientMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        clientMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(clientMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        clientMain->setStatusBar(statusBar);

        retranslateUi(clientMain);

        QMetaObject::connectSlotsByName(clientMain);
    } // setupUi

    void retranslateUi(QMainWindow *clientMain)
    {
        clientMain->setWindowTitle(QApplication::translate("clientMain", "clientMain", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("clientMain", "Client(this computer is client)", Q_NULLPTR));
        label->setText(QApplication::translate("clientMain", "Screen name : user", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("clientMain", "Log", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("clientMain", "Config", Q_NULLPTR));
        pushButton->setText(QApplication::translate("clientMain", "connect", Q_NULLPTR));
        label_2->setText(QApplication::translate("clientMain", "ServerIP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clientMain: public Ui_clientMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMAIN_H
