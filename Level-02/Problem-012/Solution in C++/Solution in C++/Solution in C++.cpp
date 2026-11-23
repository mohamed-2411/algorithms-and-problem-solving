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

void PrintInvertNumberPattern(int Number)
{
	for (int i = Number; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main()
{

	PrintInvertNumberPattern(ReadPositiveNumber("Please enter a positive number: "));

	return 0;
}