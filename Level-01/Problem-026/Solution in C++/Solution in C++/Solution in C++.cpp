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
	int i = 1;
	while (i <= N)
	{
		cout << i << endl;
		i++;
	}
}


int main()
{
	
	print_numbers_from_1_to_N();

	return 0;
}