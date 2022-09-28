// Peyton Philyaw
// 9/23/22
// Program Title: Cube
// Program Description: Take in cube parameters and use a switch function to run calculations

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main() //comment
{

	// Variable declaration

	int choice;
	double length;
	string units;

	//Program title and description for the user

	cout << "MENU TEMPLATE with SWITCH CASE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Perimeter of one side of the Cube" << endl;
	cout << "2 - Surface Area of one side of the Cube" << endl;
	cout << "3 - Surface Area of entire cube" << endl;
	cout << "4 - Total Volume of Cube" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << "Enter the length of one side of the Cube" << endl;
	cin >> length;
	cout << "Enter the units of measurement" << endl;
	cin >> units;

	// Calculations



















	// Output to the screen

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "Calculating Perimeter of one side" << endl;
		cout << length * 4 << " " << units << endl << endl;
		break;

	case 2:
		system("cls");
		cout << "Calculating Surface area of one side" << endl;
		cout << length * length << " " << units << " squared" << endl << endl;
		break;

	case 3:
		system("cls");
		cout << "Calculating Surface area of the entire box" << endl;
		cout << (length * length) * 6 << " " << units << " squared" << endl << endl;
		break;

	case 4:
		system("cls");
		cout << "Calculating Volume of the box" << endl;
		cout << length * length * length << " " << units << " cubed" << endl << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}