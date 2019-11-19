/********************************************************************************
** Form generated from reading UI file 'MKShare.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MKSHARE_H
#define UI_MKSHARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MKShareClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MKShareClass)
    {
        if (MKShareClass->objectName().isEmpty())
            MKShareClass->setObjectName(QStringLiteral("MKShareClass"));
        MKShareClass->resize(600, 400);
        menuBar = new QMenuBar(MKShareClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MKShareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MKShareClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MKShareClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MKShareClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MKShareClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MKShareClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MKShareClass->setStatusBar(statusBar);

        retranslateUi(MKShareClass);

        QMetaObject::connectSlotsByName(MKShareClass);
    } // setupUi

    void retranslateUi(QMainWindow *MKShareClass)
    {
        MKShareClass->setWindowTitle(QApplication::translate("MKShareClass", "MKShare", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MKShareClass: public Ui_MKShareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MKSHARE_H
