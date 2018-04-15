#pragma once

#include <QtWidgets/QDialog>
#include "ui_exprContorller.h"
#include"Model.h"

class exprContorller : public QDialog
{
	Q_OBJECT

public:
	exprContorller(QWidget *parent = Q_NULLPTR);

private slots:
	void getNum_0();
	void getNum_1();
	void getNum_2();
	void getNum_3();
	void getNum_4();
	void getNum_5();
	void getNum_6();
	void getNum_7();
	void getNum_8();
	void getNum_9();
	void getNum_point();
	void sum();
	void div();
	void mul();
	void sub();

	void getSum();
private:
	Model * model;
	Ui::exprContorllerClass ui;
	QString tempNum;
	bool isFristPoint = true;
};
