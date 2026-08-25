#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int days, hours, minutes, seconds, Total_Seconds;

	cout << "Please, enter days: \n";
	cin >> days;

	cout << "Please, enter hours: \n";
	cin >> hours;

	cout << "Please, enter minutes: \n";
	cin >> minutes;

	cout << "Please, enter seconds: \n";
	cin >> seconds;

	Total_Seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;


	cout << "Total Seconds = " << round(Total_Seconds);








	return 0;
}