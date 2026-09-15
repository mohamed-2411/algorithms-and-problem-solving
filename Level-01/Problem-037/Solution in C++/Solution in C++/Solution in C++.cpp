#include <iostream>
using namespace std;

int Calculate_Sum()
{
	int Number, Sum = 0;
	cout << "Please enter a number: \n";
	cin >> Number;

	while (Number != -99)
	{
		Sum += Number;
		cin >> Number;
	}

	return Sum;
}

int main()
{
	int Sum = Calculate_Sum();
	cout << "Sum = " << Sum << endl;

	return 0;
}