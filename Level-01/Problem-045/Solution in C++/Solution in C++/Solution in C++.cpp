#include <iostream>
using namespace std;

enum enMonthsOfYear
{
	January = 1, February = 2, March = 3, April = 4, May = 5,
	June = 6, July = 7, August = 8, September = 9, October = 10,
	November = 11, December = 12
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthsOfYear ReadMonthOfYear()
{
	return (enMonthsOfYear)ReadNumberInRange("Please enter the number of the month: ", 1, 12);
}

string GetMonthOfYear(enMonthsOfYear Month)
{
	switch (Month)
	{
	case enMonthsOfYear::January:
		return "January";
	case enMonthsOfYear::February:
		return "February";
	case enMonthsOfYear::March:
		return "March";
	case enMonthsOfYear::April:
		return "April";
	case enMonthsOfYear::May:
		return "May";
	case enMonthsOfYear::June:
		return "June";
	case enMonthsOfYear::July:
		return "July";
	case enMonthsOfYear::August:
		return "August";
	case enMonthsOfYear::September:
		return "September";
	case enMonthsOfYear::October:
		return "October";
	case enMonthsOfYear::November:
		return "Novermber";
	case enMonthsOfYear::December:
		return "December";
	default:
		return "Wrong Month";
	}
}

int main()
{
	
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return 0;
}