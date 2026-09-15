#include <iostream>
using namespace std;

void SwapNumbers()
{
	float Num1, Num2, Temp;
	
	cout << "Please, enter Num1: \n";
	cin >> Num1;
	
	cout << "Please, enter Num2: \n";
	cin >> Num2;

	cout << "Num1 = " << Num1 << endl;
	cout << "Num2 = " << Num2 << endl;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

	cout << "Num1 = " << Num1 << endl;
	cout << "Num2 = " << Num2 << endl;
}

int main()
{
	SwapNumbers();
	return 0;
}