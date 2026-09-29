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

void SecondsToDaysHoursMinutesSeconds(float TotalSeconds)	
{
	int Days = TotalSeconds / 86400;
	TotalSeconds -= (Days * 86400);
	int Hours = TotalSeconds / 3600;
	TotalSeconds -= (Hours * 3600);
	int Minutes = TotalSeconds / 60;
	TotalSeconds -= (Minutes * 60);
	int Seconds = TotalSeconds;

	cout << endl << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
}



int main()
{
	float NumberOfSeconds = ReadPositiveNumber("Please enter Number Of Seconds: ");
	SecondsToDaysHoursMinutesSeconds(NumberOfSeconds);

	return 0;
}