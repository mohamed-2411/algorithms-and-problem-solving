#include <iostream>
using namespace std;

int ReadNumber()
{
	int N;

	cout << "Please enter a number: \n";
	cin >> N;

	return N;
}

void PrintNumbersFromNTo1(int Number)
{
	for (int i = Number; i >= 1; i--)
	{
		cout << i << endl;
	}
}

int main()
{

	PrintNumbersFromNTo1(ReadNumber());

	return 0;
}