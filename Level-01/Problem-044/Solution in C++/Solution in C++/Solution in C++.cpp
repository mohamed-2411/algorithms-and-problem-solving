#include <iostream>
using namespace std;

enum enDayOfWeek
{
	Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, 
	Thursday = 5, Friday = 6, Saturday = 7
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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter the day number : ", 1, 7);
}
	
string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sunday:
		return "Sunday";
	case enDayOfWeek::Monday:
		return "Monday";
	case enDayOfWeek::Tuesday:
		return "Tuesday";
	case enDayOfWeek::Wednesday:
		return "Wednesday";
	case enDayOfWeek::Thursday:
		return "Thursday";
	case enDayOfWeek::Friday:
		return "Friday";
	case enDayOfWeek::Saturday:
		return "Saturday";
	default:
		return "Wrong Day";
	}
}


int main()
{
	cout << endl << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}