#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Num1: \n";
	cin >> Num1;

	cout << "Please enter Num2: \n";
	cin >> Num2;
}

void PrintBeforeSwaping(int Num1, int Num2)
{
	cout << "\nNum1 = " << Num1 << endl;
	cout << "Num2 = " << Num2 << endl;
	cout << "\n-----------------------\n";
}

void SwapNumbers(int& Num1, int& Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintAfterSwaping(int Num1, int Num2)
{
	
	cout << "After Swaping: \n";
	cout << "-----------------------\n";
	cout << "\nNum1 = " << Num1 << endl;
	cout << "Num2 = " << Num2 << endl;
}



int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintBeforeSwaping(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintAfterSwaping(Num1, Num2);
	return 0;
}