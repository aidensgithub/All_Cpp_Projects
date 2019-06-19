// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

double Z1, a, b;
void main()
{
	cout << "Input your number for a: ";
	cin >> a;
	b = a*PI / 180.0;
	Z1 = cos(b) + sin(b) + cos(3 * b) + sin(3 * b);
	cout << Z1 << endl;
	system("pause");

}
