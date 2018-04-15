#include "exprContorller.h"
#include"qdebug.h"
exprContorller::exprContorller(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	tempNum = "";
	connect(ui.button_0, SIGNAL(clicked(bool)), this, SLOT(getNum_0()));
	connect(ui.button_1, SIGNAL(clicked(bool)), this, SLOT(getNum_1()));
	connect(ui.button_2, SIGNAL(clicked(bool)), this, SLOT(getNum_2()));
	connect(ui.button_3, SIGNAL(clicked(bool)), this, SLOT(getNum_3()));
	connect(ui.button_4, SIGNAL(clicked(bool)), this, SLOT(getNum_4()));
	connect(ui.button_5, SIGNAL(clicked(bool)), this, SLOT(getNum_5()));
	connect(ui.button_6, SIGNAL(clicked(bool)), this, SLOT(getNum_6()));
	connect(ui.button_7, SIGNAL(clicked(bool)), this, SLOT(getNum_7()));
	connect(ui.button_8, SIGNAL(clicked(bool)), this, SLOT(getNum_8()));
	connect(ui.button_9, SIGNAL(clicked(bool)), this, SLOT(getNum_9()));

	connect(ui.button_point, SIGNAL(clicked(bool)), this, SLOT(getNum_point()));
	connect(ui.button_sum, SIGNAL(clicked(bool)), this, SLOT(sum()));
	connect(ui.button_div, SIGNAL(clicked(bool)), this, SLOT(div()));
	connect(ui.button_mul, SIGNAL(clicked(bool)), this, SLOT(mul()));
	connect(ui.button_sub, SIGNAL(clicked(bool)), this, SLOT(sub()));
	connect(ui.button_getSum, SIGNAL(clicked(bool)), this, SLOT(getSum()));

	model = new Model();
}

void exprContorller::getNum_0()
{
	if (tempNum != "" || tempNum == "0")
	{
		tempNum += ui.button_0->text();
		ui.label_display->setText(tempNum);
	}
}
void exprContorller::getNum_1()
{
	tempNum += ui.button_1->text();
	ui.label_display->setText(tempNum);
}
void exprContorller::getNum_2()
{
	tempNum += ui.button_2->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_3()
{
	tempNum += ui.button_3->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_4()
{
	tempNum += ui.button_4->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_5()
{
	tempNum += ui.button_5->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_6()
{
	tempNum += ui.button_6->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_7()
{
	tempNum += ui.button_7->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_8()
{
	tempNum += ui.button_8->text();
	ui.label_display->setText(tempNum);

}
void exprContorller::getNum_9()
{
	tempNum += ui.button_9->text();
	ui.label_display->setText(tempNum);
}
void exprContorller::getNum_point()
{
	if (isFristPoint)
	{
		if (tempNum == "") tempNum = "0";
		tempNum += ui.button_point->text();
		ui.label_display->setText(tempNum);
		isFristPoint = false;
	}
}

void exprContorller::sum()
{
	qDebug() << tempNum.toDouble() << endl;
	model->setNum_1(tempNum.toDouble());
	model->setFlag(QString("+"));
	tempNum = "";
	isFristPoint = true;
	ui.label_display->setText(tempNum);
}

void exprContorller::div()
{
	qDebug() << tempNum.toDouble() << endl;
	model->setNum_1(tempNum.toDouble());
	model->setFlag(QString("/"));
	tempNum = "";
	isFristPoint = true;
	ui.label_display->setText(tempNum);
}

void exprContorller::mul()
{
	qDebug() << tempNum.toDouble() << endl;
	model->setNum_1(tempNum.toDouble());
	model->setFlag(QString("*"));
	tempNum = "";
	isFristPoint = true;
	ui.label_display->setText(tempNum);
}

void exprContorller::sub()
{
	qDebug() << tempNum.toDouble() << endl;
	model->setNum_1(tempNum.toDouble());
	model->setFlag(QString("-"));
	tempNum = "";
	isFristPoint = true;
	ui.label_display->setText(tempNum);
}

void exprContorller::getSum()
{
	if (tempNum == "") return;
	qDebug() << tempNum.toDouble() << endl;
	model->setNum_2(tempNum.toDouble());
	tempNum = model->expr();
	ui.label_display->setText(tempNum);

	tempNum = "";
	model->setNum_1(0);
	model->setNum_2(0);
	isFristPoint = true;
}
