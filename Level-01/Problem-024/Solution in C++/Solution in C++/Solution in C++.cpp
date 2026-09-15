#include <iostream>
using namespace std;

int main()
{
	short Age;

	cout << "Please, enter your age: \n";
	cin >> Age;

	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid Age\n";
	}
	else
	{
		cout << "Invalid Age\n";
	}


	return 0;
}