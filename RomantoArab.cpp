//aiden
#include <iostream>
#include <string>


using namespace std;


int value(char roman) {

	switch (roman) {
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;

	}
}

int romanToInt(string A)
	{

		int i, n, ans = 0, p = 0;
		n = A.length() - 1;

		for (i = n; i >= 0; i--)
		{
			if (value(A[i]) >= p)
				ans = ans + value(A[i]);
			else
				ans = ans - value(A[i]);

			p = value(A[i]);
		}
		return ans;
	}

int arabicInput() {

	
	string roman_Numeral;
	int arabic_Numeral;
	string numerals = "IVXLCDM";
	int index;
	int digit; //peremennaya dlya soxraneniya
	string roman_digit;

	while (1) {

		cout << "Enter the Arabic number to get in roman (0 or negative to exit) : ";
		cin >> arabic_Numeral;
			if (arabic_Numeral < 1) break;

		roman_Numeral = "";
		index = 0;
		while (arabic_Numeral != 0) { //konversiya algoritmi
			digit = arabic_Numeral % 10; //ohrgi raqamni olish
			arabic_Numeral /= 10; //qogan raqamlarni tashab ketish
			switch (digit) { //converting according to specific number
			case 0:
				roman_digit = "";
				break;
			case 1:
				roman_digit = numerals[index];
				break;
			case 2:
				roman_digit = numerals[index] + numerals[index];
				break;
			case 3:
				roman_digit = numerals[index] + numerals[index] + numerals[index];
				break;
			case 4:
				roman_digit = numerals[index] + numerals[index + 1];
				break;
			case 5:
				roman_digit = numerals[index + 1];
				break;
			case 6:
				roman_digit = numerals[index + 1] + numerals[index];
				break;
			case 7:
				roman_digit = numerals[index + 1] + numerals[index] + numerals[index];
				break;
			case 8:
				roman_digit = numerals[index + 1] + numerals[index] + numerals[index] + numerals[index];
				break;
			case 9:
				roman_digit = numerals[index] + numerals[index + 2];
				break;
			default:
				roman_digit = "";
				break;
			}
			roman_Numeral = roman_digit + roman_Numeral; //bundan oldingi hisoblangan raqamlarga raqam qoshish
			index += 2; //increes the index to know where to look in the roman digit string

			if (index > 5) { //mingdan kop bolgan raqamlar uchun
				while (arabic_Numeral != 0) { //all else is just adding the correct count of 'M' in front.
					roman_Numeral = "M" + roman_Numeral;
					arabic_Numeral--;
				}
			}
		}

		cout << "Your roman numeral is: " << roman_Numeral << endl;

	}
	return 1;
}

int main(string romanin, int arabin)
{
	start:
	string s;
	while (1) {

		cout << "------------Menu-------------" << endl;
		cout << "1)Convert from Arabic to Roman" << endl;
		cout << "2)Convert from Roman to Arabic" << endl;
		cout << "3)Exit" << endl;
		int xinput;
		cin >> xinput;
		switch (xinput) {
		case 1:arabicInput();
			

		case 2:  int num;
			cout << "Enter Roman number to get in Arabic >>> " << endl;
			cin >> s;
			num = romanToInt(s);
			cout << num << "\n";
			goto start;
		case 3: break;
		}

		system("pause");
		return 1;
	}
}

