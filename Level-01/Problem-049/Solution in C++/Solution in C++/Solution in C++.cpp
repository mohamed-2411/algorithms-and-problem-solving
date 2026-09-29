#include <iostream>
using namespace std;

int ReadPIN()
{
	int PIN = 0;

	do
	{
		cout << "Please enter PIN Code: \n";
		cin >> PIN;
		if (PIN != 1234)
			cout << "Wrong PIN\n";
	} while (PIN != 1234);
	return PIN;
}

void PrintResult(int PIN)
{
	int Balance = 7500;
	cout << "Your Balance is: " << Balance << endl;
}

int main()
{
	int PIN = ReadPIN();
	PrintResult(PIN);

	return 0;
}