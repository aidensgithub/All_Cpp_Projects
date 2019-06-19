//aiden | filling info and editing
#include <iostream>
#include <fstream>

using namespace std;

int a, i, option, chooser;
int b = 0, flag = 0;
char ch;



struct panda
{
	char country[30], city[20], workplace[20], birthday[30], idnum[30], name[20], salary[30];
}; panda evar[9];

void table() {
	cout << "All data:\n";
	for (i = 0; i < 9; i++)
	{
		cout << "\nPeople Data:\n";
		cout << "Student ID: " << evar[i].idnum;
		cout << "\nName: " << evar[i].name;
		cout << "\nBirthday: " << evar[i].birthday << ", " << endl;
		cout << "Adresses:" << endl;
		cout << evar[i].country << ", ";
		cout << evar[i].city << ", " << endl;
		cout << "\nWorkplace: " << evar[i].workplace << endl;
		cout << "Salary in EUR: " << evar[i].salary;
		cout << "\n";
		break;
	}
}
void save() {
	ofstream myfile;
	myfile.open("datastruct.txt");
	myfile << "All data:\n";
	for (i = 0; i < 9; i++)
	{
		myfile << "\nPeople Data:\n";
		myfile << "Student ID: " << evar[i].idnum;
		myfile << "\nName: " << evar[i].name;
		myfile << "\nBirthday: " << evar[i].birthday << ", " << endl;
		myfile << "Adresses:" << endl;
		myfile << evar[i].country << ", ";
		myfile << evar[i].city << ", ";
		myfile << evar[i].workplace << endl;
		myfile << "Salary in EUR: " << evar[i].salary;
		myfile << "\n";
		break;
	}
}
int main()
{
mainMenu:
	cout << "(1) add person details \n";
	cout << "(2) search for a data \n";
	cout << "(3) view all data \n";
	cout << "(4) delete person details \n" << endl;
	cout << "Enter your option to continue: ";
	cin >> a;


	if (a == 1) {
		for (i = 0; i < 9; i++)
		{
			cout << "Student ID: ";
			cin >> evar[i].idnum;
			cout << "Name: ";
			cin >> evar[i].name;
			cout << "Birthday (dd:mm:yy): ";
			cin >> evar[i].birthday;
			cout << "country of origin: ";
			cin >> evar[i].country;
			cout << "City: ";
			cin >> evar[i].city;
			cout << "Workplace: ";
			cin >> evar[i].workplace;
			cout << "Salary in EUR: ";
			cin >> evar[i].salary;
			cout << "\n";
			cout << "Do you wanna finish the filling of data? if Yes push 0 or 1 to continue ";
			cin >> chooser;
			if (chooser == 1) { continue; }
			if (chooser == 0) { goto mainMenu; }
			save();
			break;
		}
	}
	
	if (a == 2) {
	deleteposs:
		int xx; char eno[30];
		cout << "~~~~ SEARCH AND DELETE MENU ~~~~" << endl;
		cout << "input to search by (NAME, ID, BIRTHDAY, COUNTRY, CITY, WORKPLACE, SALARY:\n";
		cout << "SEARCH >>>>> :"; cin >> eno;

		for (i = 0; i < 9; i++)
		{
			if (evar[i].idnum || evar[i].name || evar[i].birthday || evar[i].country || evar[i].city || evar[i].workplace || evar[i].salary == eno) {
				flag = 1;
				cout << "\nPeople Data:\n";
				cout << "Student ID: " << evar[i].idnum;
				cout << "\nName: " << evar[i].name;
				cout << "\nBirthday: " << evar[i].birthday << ", " << endl;
				cout << "Adresses:" << endl;
				cout << evar[i].country << ", ";
				cout << evar[i].city << ", ";
				cout << "\nWorkplace: " << evar[i].workplace << endl;
				cout << "Salary in EUR: " << evar[i].salary;
				cout << "\n";
				save();
				cout << " If you wanna delete this card push 9 >>> ";
				cin >> chooser;
				if (chooser == 9) { evar[i] = { "" }; }
				break;
			}
			else {

				cout << "There is no such a card!" << endl;
			}
		}

		cout << ">>> go back to main menu? push 0 >>> ";
		cin >> chooser;
		if (chooser == 0) {
			goto mainMenu;
		}
	}
	if (a == 3) {
		table();
		cout << ">>> go back to main menu? push 0 >>> ";
		cin >> chooser;
		if (chooser == 0) {
			save();
			goto mainMenu;
		}
	}
		if (a == 4) {
			goto deleteposs;
		}

	save();
	system("pause");
	return 0;
}
