//aiden | filling info and editing
#include "pch.h"
#include <iostream>
#include <string>


using namespace std;


struct idcard {
	string name;
	string surname;
	int day;
	int month;
	int year;
	string city;


}p1, p2, p3, p4, p5;
idcard dialog1() {

	cout << "Enter name: ";
	cin >> p1.name;
	cout << "Enter surname: ";
	cin >> p1.surname;
	cout << "Enter birthday (day): ";
	cin >> p1.day;
	cout << "Month: "; cin >> p1.month;
	cout << "Year: "; cin >> p1.year;
	cout << "Enter city: ";
	cin >> p1.city;
	return p1;

}
idcard dialog2() {

	cout << "Enter name: ";
	cin >> p2.name;
	cout << "Enter surname: ";
	cin >> p2.surname;
	cout << "Enter birthday (day): ";
	cin >> p2.day;
	cout << "Month: "; cin >> p2.month;
	cout << "Year: "; cin >> p2.year;
	cout << "Enter city: ";
	cin >> p2.city;
	return p2;
}
idcard dialog3() {

	cout << "Enter name: ";
	cin >> p3.name;
	cout << "Enter surname: ";
	cin >> p3.surname;
	cout << "Enter birthday (day): ";
	cin >> p3.day;
	cout << "Month: "; cin >> p3.month;
	cout << "Year: "; cin >> p3.year;
	cout << "Enter city: ";
	cin >> p3.city;
	return p3;

}
idcard dialog4() {


	cout << "Enter name: ";
	cin >> p4.name;
	cout << "Enter surname: ";
	cin >> p4.surname;
	cout << "Enter birthday (day): ";
	cin >> p4.day;
	cout << "Month: "; cin >> p4.month;
	cout << "Year: "; cin >> p4.year;
	cout << "Enter city: ";
	cin >> p4.city;
	return p4;
}
idcard dialog5() {

	cout << "Enter name: ";
	cin >> p5.name;
	cout << "Enter surname: ";
	cin >> p5.surname;
	cout << "Enter birthday (day): ";
	cin >> p5.day;
	cout << "Month: "; cin >> p5.month;
	cout << "Year: "; cin >> p5.year;
	cout << "Enter city: ";
	cin >> p5.city;
	return p5;
}


void table() {
	cout << "------------------------Table------------------------------" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "|NAME|--------|SURNAME|---------|BDAY|-------------|CITY OF BIRTH|" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << p1.name << "             " << p1.surname << "               " << p1.day << "." << p1.month << "." << p1.year << "               " << p1.city << endl;
	cout << p2.name << "             " << p2.surname << "               " << p2.day << "." << p2.month << "." << p2.year << "               " << p2.city << endl;
	cout << p3.name << "             " << p3.surname << "               " << p3.day << "." << p3.month << "." << p3.year << "               " << p3.city << endl;
	cout << p4.name << "             " << p4.surname << "               " << p4.day << "." << p4.month << "." << p4.year << "               " << p4.city << endl;
	cout << p5.name << "             " << p5.surname << "               " << p5.day << "." << p5.month << "." << p5.year << "               " << p5.city << endl;
	cout << endl;
	cout << endl;
}
int main()
{
	cout << "1****************Main Menu*****************1" << endl;
	cout << endl;
	cout << ">>> Please enter new person details" << endl;
	cout << ">>> Choose 1-5 to start filling blanks" << endl;
	cout << ">>> Push 0 to see table";
	cout << endl;
	
	int xinput;
	cin >> xinput;


	switch (xinput) {
	case 1: cout << ">>> You can start inserting data of 1st person \n"; p1 = dialog1(); table();

	case 2: cout << ">>> You can start inserting data of 2nd person \n"; p2 = dialog2(); table();


	case 3: cout << ">>> You can start inserting data of 3st person \n"; p3 = dialog3(); table();


	case 4: cout << ">>> You can start inserting data of 4th person \n"; p4 = dialog4(); table();


	case 5: cout << ">>> You can start inserting data of 5th person \n"; p5 = dialog5();
	case 6: table();


	default: cout << ">>> please, enter between 1-5" << endl;
		break;

	}
	cout << endl;
	cout << endl;
	cout << "------------------------Main Menu------------------------------" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "|NAME|--------|SURNAME|---------|BDAY|-------------|CITY OF BIRTH|" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << p1.name << "             " << p1.surname << "               " << p1.day << "." << p1.month << "." << p1.year << "               " << p1.city << endl;
	cout << p2.name << "             " << p2.surname << "               " << p2.day << "." << p2.month << "." << p2.year << "               " << p2.city << endl;
	cout << p3.name << "             " << p3.surname << "               " << p3.day << "." << p3.month << "." << p3.year << "               " << p3.city << endl;
	cout << p4.name << "             " << p4.surname << "               " << p4.day << "." << p4.month << "." << p4.year << "               " << p4.city << endl;
	cout << p5.name << "             " << p5.surname << "               " << p5.day << "." << p5.month << "." << p5.year << "               " << p5.city << endl;
	cout << endl;
	cout << endl;
	cout << "-------------------------NAVIGATION-------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << ">>  GO BACK TO MAIN MENU (and change data)--PRESS 0" << endl;
	cout << ">> IF U WANT TO CHANGE SPECIFIC PERSON PUSH 1-5" << endl;
	
	cout << ">>  If u want to exit push any other key" << endl;
	int fnav;
	cin >> fnav;

	switch (fnav) {

	case 0: main();
	case 1: dialog1(); table();
	case 2:dialog2(); table();
	case 3:dialog3(); table();
	case 4:dialog4(); table();
	case 5:dialog5();

	default: exit(0);
	}

	system("pause");
	return 0;
}


