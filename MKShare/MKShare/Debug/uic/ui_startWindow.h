/********************************************************************************
** Form generated from reading UI file 'startWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startWindow
{
public:
    QGroupBox *groupBox;
    QLabel *Label_window;
    QLabel *label;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *startWindow)
    {
        if (startWindow->objectName().isEmpty())
            startWindow->setObjectName(QStringLiteral("startWindow"));
        startWindow->resize(623, 459);
        groupBox = new QGroupBox(startWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 621, 451));
        Label_window = new QLabel(groupBox);
        Label_window->setObjectName(QStringLiteral("Label_window"));
        Label_window->setGeometry(QRect(180, 40, 281, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        Label_window->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 140, 461, 151));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Projects/MKShare/image/startdialog_computer_image_3.PNG")));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 320, 421, 71));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 321, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 233);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 233);"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(startWindow);

        QMetaObject::connectSlotsByName(startWindow);
    } // setupUi

    void retranslateUi(QDialog *startWindow)
    {
        startWindow->setWindowTitle(QApplication::translate("startWindow", "startWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        Label_window->setText(QApplication::translate("startWindow", "MKShare", Q_NULLPTR));
        label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("startWindow", "Start", Q_NULLPTR));
        pushButton->setText(QApplication::translate("startWindow", "Server", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("startWindow", "Client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class startWindow: public Ui_startWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
