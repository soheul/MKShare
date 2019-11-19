#include <QtWidgets/QApplication>

#include "startWindow.h"
#include "serverMain.h"
#include "clientMain.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);


	startWindow s;
	s.show();

	//	serverMain server;
	//	server.show();

	//	clientMain client;
	//	client.show();


	return a.exec();
}
