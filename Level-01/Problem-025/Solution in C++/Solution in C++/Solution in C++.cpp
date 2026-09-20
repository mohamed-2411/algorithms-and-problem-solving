#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;

	do
	{
		cout << "Please enter your Age: \n";
		cin >> Age;
	} while (Age < 18 || Age > 45);

	return Age;
}

bool ValidateAgeInRange(int Age, int From, int To)
{
	return (Age >= From && Age <= To);
}

void PrintResult(int Age)
{
	if (ValidateAgeInRange(Age, 18, 45))
		cout << endl << Age << " is a valid age.\n";

	else
		cout << endl << Age << " is invalid age.\n";

}

int main()
{

	PrintResult(ReadAge());

	return 0;
}