#include <iostream>
using namespace std;
int main()
{
	int number;
	int fact = 1;
	cout << "---------------\n";
	cout << "Factorial\n";
	cout << "---------------\n";
	cout << "Enter a number:";
	cin >> number;
	for (int i = number; i > 0; i--)
	{
		fact *= i;
	}
	cout << "Factorial is:";
	cout << fact;
	return 0;
}
