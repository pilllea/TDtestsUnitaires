#include <iostream>
#include "User.h"
using namespace std;

void User::setChoice() {
	cout << "Enter 1 : Add 2 numbers"
		<< "\nEnter 2 : Subtract 2 numbers"
		<< "\nEnter 3 : Divide a first number by a second"
		<< "\nEnter 0 : To Exit"
		<< "\n";
	cin >> choice;
}

int User::getChoice() {
	return choice;
}

int User::askAnumber(){
	int a;
	cout << "Enter an integer number\n";
	cin >> a;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You have entered a wrong input" << endl;
			cin >> a;
		}
		if (!cin.fail())
			break;
	}
	return a;
}


