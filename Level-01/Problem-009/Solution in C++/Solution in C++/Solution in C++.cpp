#include <iostream>
using namespace std;

struct stNumbers
{
	int Num1;
	int Num2;
	int Num3;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter Number1: \n";
	cin >> Numbers.Num1;

	cout << "Please enter Number2: \n";
	cin >> Numbers.Num2;

	cout << "Please enter Number3: \n";
	cin >> Numbers.Num3;

	return Numbers;
}

int CalculteSum(stNumbers Numbers)
{
	int Sum = Numbers.Num1 + Numbers.Num2 + Numbers.Num3;
	return Sum;
}

void PrintSum(stNumbers Numbers)
{
	cout << "\nThe sum of the entered numbers is: " << CalculteSum(Numbers) << endl;
}

int main()
{
	
	PrintSum(ReadNumbers());

	return 0;
}