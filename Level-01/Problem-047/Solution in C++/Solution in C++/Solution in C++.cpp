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

float MonthsToSettleTheLoan(int LoanAmount, int MonthlyPayment)
{
	return (float) LoanAmount / MonthlyPayment;
}


int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter the loan amount: ");
	float MonthlyPayment = ReadPositiveNumber("Please enter monthly payment: ");

	cout << endl << MonthsToSettleTheLoan(LoanAmount, MonthlyPayment) << " Months" << endl;


	return 0;
}