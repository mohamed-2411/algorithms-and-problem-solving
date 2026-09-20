#include <iostream>
using namespace std;

int ReadN()
{
	int N;
	cout << "Please enter N: \n";
	cin >> N;
	return N;
}

void PrintNumbersFrom1ToN(int N)
{
	for (int i = 1; i <= N; i++)
	{
		cout << i << endl;
	}
}


int main()
{
	
	PrintNumbersFrom1ToN(ReadN());

	return 0;
}