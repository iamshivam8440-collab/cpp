#include <iostream>
using namespace std;
int main()
{
	int num, i;
	cout << "----------------------\n";
	cout << "Multiplication table\n";
	cout << "----------------------\n";
	cout << "Enter number:";
	cin >> num;
	cout << "--------------------\n";
	cout << "Table of " << num << " is:\n";
	cout << "--------------------\n";
	for (i = 1; i <= 10; i++)
	{
		cout << num << " x " << i << "=" << num * i << "\n";
	}

	return 0;
}
