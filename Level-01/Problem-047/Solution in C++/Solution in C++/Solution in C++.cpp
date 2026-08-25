#include <iostream>
using namespace std;

int main()
{
	int LoanAmount, MonthlyPayment, MonthsToSettleTheLoan;

	cout << "Please, enter loan amount: \n";
	cin >> LoanAmount;

	cout << "Please, enter Monthly Payment: \n";
	cin >> MonthlyPayment;

	MonthsToSettleTheLoan = LoanAmount / MonthlyPayment;

	cout << MonthsToSettleTheLoan << " Months\n";







	return 0;
}