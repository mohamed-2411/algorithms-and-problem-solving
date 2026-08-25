#include <iostream>
using namespace std;

int main()
{
	float Pennies, Nickels, Dimes, Quarters,
		  Dollars, Total_Pennies, Total_Dollars;

	cout << "Please, enter Pennies: \n";
	cin >> Pennies;

	cout << "Please, enter Nickels: \n";
	cin >> Nickels;

	cout << "Please, enter Dimes: \n";
	cin >> Dimes;

	cout << "Please, enter Quarters: \n";
	cin >> Quarters;

	cout << "Please, enter Dollars: \n";
	cin >> Dollars;

	Total_Pennies = Pennies + (Nickels * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
	Total_Dollars = Total_Pennies / 100;

	cout << Total_Pennies << " Pennies\n";
	cout << Total_Dollars << " Dollars\n";



	return 0;
}