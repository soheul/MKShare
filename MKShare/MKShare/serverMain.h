#pragma once

#include <QMainWindow>
#include "ui_serverMain.h"


namespace Ui {
	class serverMain;
}


class serverMain : public QMainWindow
{
	Q_OBJECT

public:
	serverMain(QWidget *parent = Q_NULLPTR);
	~serverMain();

private:
	Ui::serverMain ui;
};
