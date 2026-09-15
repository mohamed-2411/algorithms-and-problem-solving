#include <iostream>
using namespace std;

int main()
{
	float TotalSales, Percentage;

	cout << "Please, enter Total Sales: \n";
	cin >> TotalSales;

	if (TotalSales > 1000000)
	{
		Percentage = 0.01;
		cout <<  Percentage * TotalSales << endl;
	}
	else if (TotalSales > 500000)
	{
		Percentage = 0.02;
		cout << TotalSales * Percentage << endl;
	}
	else if (TotalSales > 100000)
	{
		Percentage = 0.03;
		cout << TotalSales * Percentage << endl;
	}
	else if (TotalSales > 50000)
	{
		Percentage = 0.05;
		cout << TotalSales * Percentage << endl;
	}
	else
	{
		Percentage = 0;
		cout << TotalSales * Percentage << endl;
	}
	return 0;
}