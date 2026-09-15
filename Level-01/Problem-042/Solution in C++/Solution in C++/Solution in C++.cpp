#include <iostream>
#include <cmath>

using namespace std;

int DurationInSeconds(int days, int hours, int minutes, int seconds)
{
	int TotalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
	return TotalSeconds;
}

int main()
{
	int days, hours, minutes, seconds, TotalSeconds;

	cout << "Please, enter days: \n";
	cin >> days;

	cout << "Please, enter hours: \n";
	cin >> hours;

	cout << "Please, enter minutes: \n";
	cin >> minutes;

	cout << "Please, etner seconds: \n";
	cin >> seconds;

	TotalSeconds = DurationInSeconds(days, hours, minutes, seconds);
	cout << TotalSeconds << " Seconds" << endl;


	return 0;
}