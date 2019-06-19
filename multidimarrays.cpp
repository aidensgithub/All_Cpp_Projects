// done by aiden
//---------------------------------------------

#include "pch.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	
	int v[4][4];
	int r = 1;
	int inp;

	cout << "Input your number >>>  ";
	cin >> inp;
	cout << "\n";


	if (inp >= 4 && inp <= 10) {

		for (int i = 0; i < 4; i++) {
			v[0][i] = r;
			r++;
		
		}
		for (int i = 1; i < 4; i++) {
			v[i][3] = r;
			r++;
		}
		for (int i = 2; i >= 0; i--) {
			v[3][i] = r;
			r++;
		}
		for (int i = 2; i > 0; i--) {
			v[i][0] = r;
			r++;
		}
		for (int i = 1; i < 3; i++) {
			v[1][i] = r;
			r++;
		}
		for (int i = 2; i > 0; i--) {
			v[2][i] = r;
			r++;
		}
		for (int i = 0; i < 4; i++)
		{
			
			for (int j = 0; j < 4; j++)
			{

				cout << v[i][j]<<" ";
				
			}
			cout << endl;
		}
	}
	
	else {
		cout << "U got the wrong number try between 4-10" << endl;
	}
	system("pause");
	return 0;
}