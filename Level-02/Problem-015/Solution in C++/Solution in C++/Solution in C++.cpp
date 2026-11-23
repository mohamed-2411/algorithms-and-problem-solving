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

void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= 64 + Number; i++)
	{
		for (int j = i; j >= 65; j--)
		{
			cout << char(i);
		}
		cout << endl;
	}

}

int main()
{

	PrintLetterPattern(ReadPositiveNumber("Please enter a positive number: "));

	return 0;
}