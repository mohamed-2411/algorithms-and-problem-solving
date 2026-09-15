#include <iostream>
using namespace std;

float ReadNumber()
{
	float Number;
	
	cout << "Please enter the number: \n";
	cin >> Number;

	return Number;
}
	
float GetTheHalfOfTheNumber(float Number)
{
	float HalfOfTheNumber = Number / 2;
	return HalfOfTheNumber;
}

void PrintResults(float Number)
{
	cout << "Half of the " << Number << " is " << GetTheHalfOfTheNumber(Number) << endl;
}

int main()
{
	
	PrintResults(ReadNumber());

	return 0;
}