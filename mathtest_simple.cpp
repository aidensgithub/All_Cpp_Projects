#include "stdafx.h"
#include <iostream>
#include <cmath>

#define PI 3.14159265
using namespace std;

void main()
{
	int p;
	double x;
	p = PI / 180;
	cout << "define x:" << "\n"; cin >> x;

	//condition one

	if (-1 <= x && x<0) {
		cout << "First condition " << pow(sin(x + 3),2)*p << endl;
	}
	else if (0 <= x && x<1) {
		cout << "Second condition " << pow((pow(x, 2) - 1), 2) << endl;
	}
	else {
		cout << "Third condition " << pow(x,2) + x + 3 << endl;
	}
	system("pause");
}
