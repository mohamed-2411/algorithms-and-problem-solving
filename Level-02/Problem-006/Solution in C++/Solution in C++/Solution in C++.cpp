#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int SumOfDigits(int Number)
{
	int Remainder = 0, Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}

	return Sum;
}

int main()
{
	int Sum = SumOfDigits(ReadPositiveNumber("Please enter a positive number: "));

	cout << "\nSum Of Digits = " << Sum << endl;


	return 0;
}