#include <iostream>
using namespace std;

int main()
{
	float TotalBill, CashPaid, Remainder;

	cout << "Please, enter total bill: \n";
	cin >> TotalBill;

	cout << "Please, enter cash paid: \n";
	cin >> CashPaid;

	Remainder = CashPaid - TotalBill;

	cout << "Remainder = " << Remainder << endl;








	return 0;
}