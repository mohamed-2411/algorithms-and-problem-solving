#include <iostream>
using namespace std;

float ReadToalaSales()
{
	float TotalSales;

	cout << "Please enter Total Sales: \n";
	cin >> TotalSales;

	return TotalSales;
}

float CalculateCommission(float TotalSales)
{
	if (TotalSales >= 1000000)
		return TotalSales * 0.01;
	else if (TotalSales >= 500000)
		return TotalSales * 0.02;
	else if (TotalSales >= 100000)
		return TotalSales * 0.03;
	else if (TotalSales >= 50000)
		return TotalSales * 0.05;
	else
		return TotalSales * 0;
}

void PrintResult(float Result)
{
	cout << "\nResult = " << Result << endl;
}

int main()
{

	PrintResult(CalculateCommission(ReadToalaSales()));

	return 0;
}