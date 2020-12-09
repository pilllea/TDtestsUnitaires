#include <iostream>
#include <math.h>
#include "Calculator.h"
using namespace std;

/// <summary>
/// Retrieve a number from the participant
/// </summary>
/// <returns></returns>
int getAnumber() {
	int a;
	cout << "Enter Number: ";
	cin >> a;
	return a;
}

int main()
{
	//Choice of action given by the user
	int choice;
	int a, b;
	//Simple calculator object
	Calculator cal; 
	cout << "Enter 1 : Add 2 Numbers"
		<< "\nEnter 2 : Subtract 2 Numbers"
		<< "\nEnter 0 : To Exit"
		<< "\n";

	do {
		cout << "\nEnter Choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			a = getAnumber();
			b = getAnumber();
			cout << "Result: " << cal.add(a, b) << endl;
			break;
		case 2:
			a = getAnumber();
			b = getAnumber();
			cout << "Result: " << cal.sub(a, b) << endl;
			break;
		}

	} while (choice >= 1 && choice <= 4);

	return 0;
}

