#pragma once

#include <QMainWindow>
#include "ui_clientMain.h"


namespace Ui {
	class clientMain;
}



class clientMain : public QMainWindow
{
	Q_OBJECT

public:
	clientMain(QWidget *parent = Q_NULLPTR);
	~clientMain();

private:
	Ui::clientMain ui;
};
