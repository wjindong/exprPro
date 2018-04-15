#pragma once

#include<qstring.h>

class Model
{
public:
	Model();
	~Model();
	void setNum_1(double num);
	void setNum_2(double num);
	void setFlag(QString flag);
	QString expr();
private:
	double num_1;
	double num_2;
	QString flag;

};

