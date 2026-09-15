#include <iostream>
using namespace std;

void Read_Number_And_M(int &Number, int &M)
{
	cout << "Please enter Number: \n";
	cin >> Number;

	cout << "Please enter M: \n";
	cin >> M;
}

int Calculate_The_Power_Of_M(int Number, int M)
{
	int i = 1, Result = 1;

	while (i <= M)
	{
		Result *= Number;
		i++;
	}

	return Result;
}

int main()
{

	int Number, M, Result;
	Read_Number_And_M(Number, M);
	Result = Calculate_The_Power_Of_M(Number, M);
	cout << "Result = " << Result << endl;

	return 0;
}