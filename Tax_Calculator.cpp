//aiden|Tax calculator

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

double salary;
double salar;
int child;
int children;
double netto;

void sal(){

	cout << "Input your total salary (brutto) : "; cin >> salar;

}	
void ch(){

	cout << "how many dependants you have?"; cin >> child;
	switch (child){
	case 0: children = 0; break;
	case 1: children = 1 * 230; break;
	case 2: children = 2 * 230; break;
	case 3: children = 3 * 230; break;
	case 4: children = 4 * 230; break;
	case 5: children = 5 * 230; break;
	case 6: children = 6 * 230; break;
	default: cout << "It doesn't work when u have more than 6 children!";

	}


}
void tx(){

	 salary = (salar + children) * 0.20; //20%
		netto = salary - 0.11; //11%
			cout << netto << endl;
}

int main(){

	sal();
	ch();
	
	cout << " Your netto salary is: ";	tx();


	system("pause");
	return 0;

}