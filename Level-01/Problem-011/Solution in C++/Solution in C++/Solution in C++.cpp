#include <iostream>
using namespace std;

int main()
{
	float Mark1, Mark2, Mark3, Average;

	cout << "Please, enter Mark1: \n";
	cin >> Mark1;

	cout << "Please, enter Mark2: \n";
	cin >> Mark2;

	cout << "Please, enter Mark3: \n";
	cin >> Mark3;

	Average = (Mark1 + Mark2 + Mark3) / 3;

	if (Average >= 50)
	{
		cout << "Pass\n";
	}
	else
	{
		cout << "Fail\n";
	}


	return 0;
}