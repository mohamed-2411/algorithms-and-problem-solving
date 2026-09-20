#include <iostream>
using namespace std;

struct stCurrency
{
	float Pennies, Nickels, Dimes, Quarters, Dollars;
};

stCurrency ReadCurrency()
{
	stCurrency Currency;
	
	cout << "Please enter Pennies: \n";
	cin >> Currency.Pennies;

	cout << "Please enter Nickels: \n";
	cin >> Currency.Nickels;

	cout << "Please enter Dimes: \n";
	cin >> Currency.Dimes;

	cout << "Please enter Quarters: \n";
	cin >> Currency.Quarters;

	cout << "Please enter Dollars: \n";
	cin >> Currency.Dollars;

	return Currency;
}

float TotalPennies(stCurrency Currency)
{
	float TotalPennies = Currency.Pennies + (Currency.Nickels * 5) +
		(Currency.Dimes * 10) + (Currency.Quarters * 25) + (Currency.Dollars * 100);
	return TotalPennies;
}

float TotalDollars(stCurrency Currency)
{
	return TotalPennies(Currency) / 100;
}

void PrintTotalPennies(float TotalPennies)
{
	cout << endl << TotalPennies << " Pennies\n";
}

void PrintTotalDollars(float TotalDollars)
{
	cout << endl << TotalDollars << " Dollars" << endl;
}


int main()
{
	stCurrency Currency = ReadCurrency();

	PrintTotalPennies(TotalPennies(Currency));
	PrintTotalDollars(TotalDollars(Currency));

	return 0;
}