#pragma once

#include <QDialog>
#include "ui_startWindow.h"



namespace Ui {
	class startWindow;
}

class startWindow : public QDialog
{
	Q_OBJECT

public:
	startWindow(QWidget *parent = Q_NULLPTR);
	~startWindow();

private:
	Ui::startWindow ui;
};
