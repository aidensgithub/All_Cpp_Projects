// ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	struct countries{
		int monaco = 2, grenada = 344, malta = 316, maldives = 300, vatican, nauru = 21, tuvalu = 26, liechtenstein = 160, latvia = 255, sweden = 143, finland = 141, russia = 455, usa = 423, cyprus = 54, uk = 411;
	};


	string table[10] = { };
	ofstream myfile;

	myfile.open("countriesSmall.txt");
	for (int i = 0; i < 10; i++){
		myfile << table[i];
		for (int a = 0; a < 10; a += 3){
			myfile << "writing this to a file\n";
		}
	}
	myfile.close();

	system("pause");
	return 0;
	
}