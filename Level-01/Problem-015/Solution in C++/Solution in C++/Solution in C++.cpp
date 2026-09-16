#include <iostream>
using namespace std;

void ReadNumbers(int& a, int& b)
{
	cout << "Please enter a: \n";
	cin >> a;

	cout << "Please enter b: \n";
	cin >> b;
}

int CalculateRectangleArea(int a, int b)
{
	return a * b;
}

void PrintArea(int Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}


int main()
{
	int a, b;
	ReadNumbers(a, b);
	PrintArea(CalculateRectangleArea(a, b));

	return 0;
}