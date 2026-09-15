#include <iostream>
using namespace std;

int main()
{
	float Num1, Num2;
	char OP;

	cout << "Please, enter Num1: \n";
	cin >> Num1;

	cout << "Please, enter Num2: \n";
	cin >> Num2;

	cout << "Please, enter the operation: \n";
	cin >> OP;

	switch (OP)
	{
	case '+':
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		break;
	case '-':
		cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
		break;
	case '*':
		cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
		break;
	case '/':
		cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
		break;
	default:
		cout << "Please, enter a valid operator.\n";
	}
	return 0;
}