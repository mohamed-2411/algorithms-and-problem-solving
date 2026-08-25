#include <iostream>
using namespace std;

int main()
{

	float BillValue, Services_fee, Sales_tax, TotalBill;

	cout << "Please, enter bill value: \n";
	cin >> BillValue;

	Services_fee = BillValue * 0.10;
	Sales_tax = BillValue * 0.16;

	TotalBill = BillValue + Services_fee + Sales_tax;

	cout << "Total Bill Value = " << TotalBill << endl;






	return 0;
}