#include <iostream>
using namespace std;

struct stNumbers
{
	float Num1, Num2;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter number1: \n";
	cin >> Numbers.Num1;

	cout << "Please enter number2: \n";
	cin >> Numbers.Num2;

	return Numbers;
}

float GetMaxNumber(stNumbers Numbers)
{
	if (Numbers.Num1 > Numbers.Num2)
		return Numbers.Num1;

	else
		return Numbers.Num2;
}

void PrintMaxNumber(float MaxNumber)
{
	cout << endl << MaxNumber << " is the max number.\n";

}

int main()
{

	PrintMaxNumber(GetMaxNumber(ReadNumbers()));



	return 0;
}