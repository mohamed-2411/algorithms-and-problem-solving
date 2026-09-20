#include <iostream>
using namespace std;

int ReadNumber()
{
	int N;

	cout << "Please enter N: \n";
	cin >> N;

	return N;
}

int SumOddNumbersFrom1ToN(int N)
{
	int Sum = 0;
	
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 != 0)
			Sum += i;
	}

	return Sum;
}

void PrintResult(int Sum)
{
	cout << "\nSum = " << Sum << endl;
}

int main()
{

	PrintResult(SumOddNumbersFrom1ToN(ReadNumber()));

	return 0;
}