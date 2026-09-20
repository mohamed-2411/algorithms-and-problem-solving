#include <iostream>
#include <cmath>

using namespace std;

int ReadNumberAndPower()
{
	int N;

	cout << "Please enter a number: \n";
	cin >> N;

	return N;
}

void PrintPowOf2_3_4(int N)
{
	cout << N << " Power of 2 " << N * N << endl;
	cout << N << " Power of 3 " << N * N * N << endl;
	cout << N << " Power of 4 " << N * N * N * N << endl;
}

int main()
{

	PrintPowOf2_3_4(ReadNumberAndPower());


	return 0;
}