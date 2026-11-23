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

void PrintInvertedLetterPattern(int Number)
{
	for (int i = 64 + Number; i >= 65; i--)
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

	PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number"));
	
	return 0;
}