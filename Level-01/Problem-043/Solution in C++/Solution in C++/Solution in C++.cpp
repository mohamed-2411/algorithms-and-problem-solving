#include <iostream>
using namespace std;

int main()
{
	int days, hours, minutes, seconds, TotalSeconds;

	cout << "Please, enter Total Seconds: \n";
	cin >> TotalSeconds;

	days = TotalSeconds / 86400;
	TotalSeconds -= days * 86400;

	hours = TotalSeconds / 3600;
	TotalSeconds -= hours * 3600;

	minutes = TotalSeconds / 60;
	TotalSeconds -= minutes * 60;

	seconds = TotalSeconds;

	cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds) << endl;



	return 0;
}