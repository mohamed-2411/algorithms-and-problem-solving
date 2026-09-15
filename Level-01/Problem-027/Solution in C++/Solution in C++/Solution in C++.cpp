#include <iostream>
using namespace std;

int Read_N()
{
	int N;
	cout << "Please enter N: \n";
	cin >> N;
	return N;
}

void print_numbers_from_1_to_N()
{
	int N = Read_N();
	while (N >= 1) 
	{
		cout << N << endl;
		N--;
	}
}


int main()
{

	print_numbers_from_1_to_N();

	return 0;
}