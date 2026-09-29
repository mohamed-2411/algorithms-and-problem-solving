#include <iostream>
using namespace std;

int ReadPIN()
{
	int PIN = 0, count = 3;

	do
	{
		count--;
		cout << "Please enter PIN Code: \n";
		cin >> PIN;
		if (PIN != 1234)
			cout << "Wrong PIN\n";
	} while ( PIN != 1234 && count > 0);

	return PIN;
} 

bool CheckPIN(int PIN)
{
	return (PIN == 1234);
}

void PrintResult(int PIN)
{
	if (CheckPIN(PIN))
		cout << "Your Balance is: " << 7500 << endl;
	else
		cout << "Card Is Locked!";
}

int main()
{
	int PIN = ReadPIN();
	PrintResult(PIN);

	return 0;
}