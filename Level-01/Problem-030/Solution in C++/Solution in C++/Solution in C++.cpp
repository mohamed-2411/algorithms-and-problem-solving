#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int N;

	do
	{
		cout << Message << endl;;
		cin >> N;
	} while (N <= 0);

	return N;
}

int FactorialOfNumber(int N)
{
	int Result = 1;

	for (int i = N; i >= 1; i--)
	{
		Result *= i;
	}

	return Result;
}

void PrintResult(int Result)
{
	cout << "\nResult = " << Result << endl;
}

int main()
{

	PrintResult(FactorialOfNumber(ReadPositiveNumber("Please enter a positive number: ")));

	return 0;
}