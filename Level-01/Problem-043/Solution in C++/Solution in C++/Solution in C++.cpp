#include <iostream>
using namespace std;

void SecToDaysHoursMinutesSeconds()
{
	int TotalSeconds, Days, Minutes, Hours, Seconds;

	cout << "Please, enter total seconds: \n";
	cin >> TotalSeconds;

	Days = TotalSeconds / 86400;
	TotalSeconds -= Days * 86400;

	Hours = TotalSeconds / 3600;
	TotalSeconds -= Hours * 3600;

	Minutes = TotalSeconds / 60;
	TotalSeconds -= Minutes * 60;

	Seconds = TotalSeconds;

	cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
}

int main()
{
	SecToDaysHoursMinutesSeconds();


	return 0;
}