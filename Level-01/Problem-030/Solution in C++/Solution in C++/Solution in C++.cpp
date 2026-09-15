#include <iostream>
using namespace std;

int ReadN()
{
	int N;

	cout << "Please enter N: \n";
	cin >> N;

	while (N < 0)
	{
		cout << "Please enter N: \n";
		cin >> N;
	}
	
	return N;
}

int Calculate_Factorial_Of_N()
{
	int N = ReadN();
	int Result = 1, i = N;

	while (i >= 1)
	{
		Result *= i;
		i--;
	}
	
	return Result;
}

int main()
{
	int Result = Calculate_Factorial_Of_N();

	cout << "Result = " << Result << endl;

	return 0;
}