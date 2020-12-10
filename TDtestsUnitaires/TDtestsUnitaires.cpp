#include <iostream>
#include <math.h>
#include "Calculator.h"
#include "User.h"
using namespace std;

int main()
{
	int a, b;
	//Simple calculator object
	Calculator cal; 

	//Simple user object
	User someone;

	//Premier test à la main
	string isValid = (cal.factorielle(0)) ? "Fonctionne" : "Ne fonctionne pas\n\n";
	cout << "Test - Factorielle de 0 est egal a 1 : " << isValid; //Sans modification du code source, ce test n'est pas validé

	do {
		cout << "\nEnter Choice: ";
		someone.setChoice();

		switch (someone.getChoice()) {
		case 1:
			a = someone.askAnumber();
			b = someone.askAnumber();
			cout << "Result: " << cal.add(a, b) << endl;
			break;
		case 2:
			a = someone.askAnumber();
			b = someone.askAnumber();
			cout << "Result: " << cal.sub(a, b) << endl;
			break;
		}

	} while (someone.getChoice() >= 1 && someone.getChoice() <= 4);

	return 0;
}

