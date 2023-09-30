#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a = 1.2;
	double b = 4.9;
	double x;//Произвольный x
	double y;//Ответ
	cout << "x = "; cin >> x;
	if (x <= 2) //В случае первого условия 
	{
		y = ((a + x) / (1 + sqrt(x)));
	}
	else if ((2 < x) && (x < 5))//В случае второго условия
	{
		y = (atan(b / (x * x + 1)));
	}
	else {
		y = (log10(x + sqrt(a * x)));//В случае третьего условия
	}
	cout << "y =" << y;
}
