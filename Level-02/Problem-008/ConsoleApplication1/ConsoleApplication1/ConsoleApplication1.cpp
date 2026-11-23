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

int CountDigitFrequency(int FullNumber, int Number)
{
	int Remainder = 0, FerqCount = 0;

	while (FullNumber > 0)
	{
		Remainder = FullNumber % 10;
		FullNumber /= 10;
		if (Remainder == Number)
			FerqCount += 1;
	}
	return FerqCount;
}

int main()
{
	int FullNumber = ReadPositiveNumber("Please enter a full number: ");
	short Number = ReadPositiveNumber("Please enter a number: ");
	int Frequency = CountDigitFrequency(FullNumber, Number);

	cout << "\nDigit " << Number << " is " << Frequency << " Time(s).\n";


	return 0;
}