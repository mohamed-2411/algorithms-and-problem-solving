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

bool isPerfectNumber(int Number)
{
	int Sum = 0;

	for (int Counter = 1; Counter < Number; Counter++)
	{
		if (Number % Counter == 0)
			Sum += Counter;
	}
	return (Sum == Number);
}

void PrintResult(int Number)
{
	cout << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (isPerfectNumber(i))
			cout << i << " Is Perfect Number.\n";
	}
	
}


int main()
{

	PrintResult(ReadPositiveNumber("Please enter a positive number: "));

	return 0;
}