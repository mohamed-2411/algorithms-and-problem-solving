#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float NumberOfDays(float Hours)
{
	return (float)Hours / 24;
}

float NumberOfWeeks(float Hours)
{
	return (float)NumberOfDays(Hours) / 7;
}


int main()
{
	float Hours = ReadPositiveNumber("Please enter Number Of Hours: ");
	float Days = NumberOfDays(Hours);
	float Weeks = NumberOfWeeks(Hours);

	cout << endl << Weeks << " Weeks\n";
	cout << Days << " Days\n";

	return 0;
}