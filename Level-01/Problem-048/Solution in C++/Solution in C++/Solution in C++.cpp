#include <iostream>
using namespace std;

int main()
{
	int LoanAmount, MonthsToSettleTheLoan, MonthlyPayment;

	cout << "Please, enter loan amount: \n";
	cin >> LoanAmount;

	cout << "Please, enter how many months to settle the loan: \n";
	cin >> MonthsToSettleTheLoan;

	MonthlyPayment = LoanAmount / MonthsToSettleTheLoan;

	cout << MonthlyPayment << endl;







	return 0;
}