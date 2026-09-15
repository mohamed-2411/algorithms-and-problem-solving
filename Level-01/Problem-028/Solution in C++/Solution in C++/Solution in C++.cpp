#include <iostream>
using namespace std;

int ReadN()
{
	int N;
	cout << "Please enter N: \n";
	cin >> N;
	return N;
}

int Sum_Odd_Numbers_Form_1_To_N()
{
	int N = ReadN();
	int Sum = 0, i = 1;

	while (i <= N)
	{
		if (i % 2 != 0)
		{
			Sum += i;
		}
		i++;
	}
	return Sum;
}

int main()
{
	int Sum = Sum_Odd_Numbers_Form_1_To_N();

	cout << "Sum = " << Sum << endl;
	

	return 0;
}