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

float CalcTheRemainder(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}

void PrintResult(float Result)
{
	cout << endl << "Remainder = " << Result << endl;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill: ");
	float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid: ");
	PrintResult(CalcTheRemainder(TotalBill, TotalCashPaid));

	return 0;
}