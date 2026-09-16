#include <iostream>
using namespace std;

struct stNumbers
{
	float Num1, Num2, Num3;
};

stNumbers ReadNumbers()
{
	stNumbers Numbers;

	cout << "Please enter num1: \n";
	cin >> Numbers.Num1;

	cout << "please enter num2: \n";
	cin >> Numbers.Num2;

	cout << "Please enter num3: \n";
	cin >> Numbers.Num3;

	return Numbers;
}

float MaxOf3Numbers(stNumbers Numbers)
{
	if (Numbers.Num1 > Numbers.Num2 && Numbers.Num1 > Numbers.Num3)
		return Numbers.Num1;

	else if (Numbers.Num2 > Numbers.Num3)
		return Numbers.Num2;
	else
		return Numbers.Num3;
}

void PrintMaxNumber(float Max)
{
	cout << "\nThe max number is " << Max << endl;
}

int main()
{

	PrintMaxNumber(MaxOf3Numbers(ReadNumbers()));

	return 0;
}