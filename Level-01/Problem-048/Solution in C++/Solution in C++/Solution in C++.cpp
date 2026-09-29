#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float MonthlyInstallment(int LoanAmount, int TotalMonths)
{
	return (float)LoanAmount / TotalMonths;
}


int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the loan amount: ");
	float TotalMonths = ReadPositiveNumber("How many months you need to settle the loan: ");

	cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, TotalMonths) << endl;


	return 0;
}