#include <iostream>
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

int ReverseNumber(int Number)
{
	int Remainder = 0, Num2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Num2 = Num2 * 10 + Remainder;
	}
	return Num2;
}

bool IsPalindromeNumber(int Number)
{
	return (Number == ReverseNumber(Number));
}

void PrintResult(int Number)
{
	cout << endl;

	if (IsPalindromeNumber(Number))
		cout << "Yes, it is a Palindrome number.\n";
	else
		cout << "No, it is Not a Palindrome number.\n";
}


int main()
{

	PrintResult(ReadPositiveNumber("Please enter a positive number: "));


	return 0;
}