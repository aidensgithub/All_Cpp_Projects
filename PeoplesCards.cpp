//aiden info cards
#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;


struct idcard {
	int day, month, year, idnum, roll;
	double salary;
	string name, surname, city, country, workplace;

}p[9];

idcard dialog1() {
	for (int i = 0; i < 9; i++)
	{
		p[i].roll = i + 1;

		cout << "Enter name: ";
		cin >> p[i].name;
		cout << "Enter surname: ";
		cin >> p[i].surname;
		cout << "Enter birthday (day): ";
		cin >> p[i].day;
		cout << "Month: "; cin >> p[i].month;
		cout << "Year: "; cin >> p[i].year;
		cout << "Enter city: ";
		cin >> p[i].city;
		cout << "Enter the country of origin: ";
		cin >> p[i].country;
		cout << "Your workplace? : ";
		cin >> p[i].workplace;
		cout << "Your salary in Euros: ";
		cin >> p[i].salary;
		cout << "Your ID number: ";
		cin >> p[i].idnum;
	}
}

void table() {
	for (int i = 0; i < 10; ++i)
	{
		cout << "------------------------------------------>\n";
		cout << "\nRoll number: " << i + 1 << endl;
		cout << "Name: " << p[i].name << "Surname: " << p[i].surname << endl;
		cout << "Birthday: " << p[i].day << "." << p[i].month << "." << p[i].year << endl;
		cout << "Country and City: " << p[i].country << p[i].city << endl;
		cout << "Workplace: " << p[i].workplace << endl;
		cout << "Salary: " << p[i].salary << endl;
		cout << "ID number: " << p[i].idnum << endl;
		cout << "------------------------------------------>\n";
	}

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
