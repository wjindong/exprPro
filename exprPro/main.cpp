#include "exprContorller.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	exprContorller exp;
	exp.show();



	return a.exec();
}
