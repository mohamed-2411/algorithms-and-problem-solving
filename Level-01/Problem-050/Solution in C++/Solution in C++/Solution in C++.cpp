#include <iostream>
using namespace std;

void ReadPIN(int &PIN)
{
	cout << "Please enter PIN: \n";
	cin >> PIN;
}

void CheckPIN(int PIN)
{
	int attempts = 2;

	while (PIN != 1234 && attempts > 0)
	{
		cout << "Wrong PIN, ";
		attempts--;
		ReadPIN(PIN);
	}
	
	if (PIN == 1234)
	{
		cout << "Your Balance is: " << 7500 << endl;
	}

	else
	{
		cout << "Card is locked!\n";
	}

	 
}

int main()
{
	int PIN;
	ReadPIN(PIN);
	CheckPIN(PIN);

	return 0;
}