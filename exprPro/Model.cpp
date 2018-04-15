#include "Model.h"



Model::Model()
{
}


Model::~Model()
{
}

void Model::setNum_1(double num)
{
	num_1 = num;
}

void Model::setNum_2(double num)
{
	num_2 = num;
}

void Model::setFlag(QString f)
{
	flag = f;
}

QString Model::expr()
{
	double result = 0;

	if (flag == "+")
	{
		result = num_1 + num_2;
	}
	else if (flag == "-")
	{
		result = num_1 - num_2;
	}
	else if (flag == "*")
	{
		result = num_1 * num_2;
	}
	else if (flag == "/")
	{
		if (num_2 == 0)
		{
			return "Error";
		}
		result = num_1 / num_2;
	}
	else {
		return QString::number(num_1);
	}
	QString resQstring;
	resQstring.setNum(result);
	return resQstring;
}
