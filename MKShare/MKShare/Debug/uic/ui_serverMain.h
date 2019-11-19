/********************************************************************************
** Form generated from reading UI file 'serverMain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERMAIN_H
#define UI_SERVERMAIN_H

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

class Ui_serverMain
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serverMain)
    {
        if (serverMain->objectName().isEmpty())
            serverMain->setObjectName(QStringLiteral("serverMain"));
        serverMain->resize(712, 500);
        centralWidget = new QWidget(serverMain);
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
        pushButton->setGeometry(QRect(510, 170, 75, 23));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 170, 75, 23));
        groupBox_3->raise();
        label->raise();
        groupBox_2->raise();
        serverMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(serverMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 21));
        serverMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(serverMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        serverMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(serverMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        serverMain->setStatusBar(statusBar);

        retranslateUi(serverMain);

        QMetaObject::connectSlotsByName(serverMain);
    } // setupUi

    void retranslateUi(QMainWindow *serverMain)
    {
        serverMain->setWindowTitle(QApplication::translate("serverMain", "serverMain", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("serverMain", "Server(this computer is server)", Q_NULLPTR));
        label->setText(QApplication::translate("serverMain", "IP Address  : 169.254.35.50", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("serverMain", "Log", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("serverMain", "Config", Q_NULLPTR));
        pushButton->setText(QApplication::translate("serverMain", "Listen", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("serverMain", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class serverMain: public Ui_serverMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERMAIN_H
