#include <iostream>
using namespace std;

struct stNumbers
{
	float Num1;
	float Num2;
	float Num3;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter Number1: \n";
	cin >> Numbers.Num1;

	cout << "Please enter Number2: \n";
	cin >> Numbers.Num2;

	cout << "Please enter Number3: \n";
	cin >> Numbers.Num3;

	return Numbers;
}

float CalculteAverage(stNumbers Numbers)
{
	float Average = (Numbers.Num1 + Numbers.Num2 + Numbers.Num3) / 3;
	return Average;
}

void PrintAverage(stNumbers Numbers)
{
	cout << "\nThe Average of the entered numbers is: " << CalculteAverage(Numbers) << endl;
}

int main()
{

	PrintAverage(ReadNumbers());

	return 0;
}