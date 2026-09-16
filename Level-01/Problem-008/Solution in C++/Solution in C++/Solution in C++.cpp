#include <iostream>
using namespace std;

enum enPassFail { Fail = 0, Pass = 1};

int ReadMark()
{
	int Mark;

	cout << "Please enter Mark: \n";
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nPASS\n";
	else
		cout << "\nFail\n";
}

int main()
{
	PrintResults(ReadMark());

	return 0;
}