#include <iostream>
using namespace std;

int main()
{
	int PIN, Balance = 7500;

	cout << "Please, enter PIN code: \n";
	cin >> PIN;

	if (PIN == 1234)
	{
		cout << "Balance = " << Balance << endl;
	}
	else
	{
		cout << "Wrong PIN\n";
	}

	return 0;
}