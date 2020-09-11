//#pragma once
#include"test.h"

int main()
{
	try
	{
		cout << divideNumbers(2.5, 0.5) << endl;
		cout << divideNumbers(2.3, 0) << endl;
	}
	catch(const exception& exception)
	{
		cout << "An exception was caught" << endl;
	}

	return 0;
}

double divideNumbers(double a, double b)
{
	if(b == 0)
		throw exception();

	return a / b;
}
