#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "----------------------------\n";
	cout << "Find number is even or odd\n";
	cout << "----------------------------\n";
	cout << "Enter a number:";
	cin >> num;
	if (num % 2 == 1)
		cout << "Number is odd:";
	else
		cout << "Number is even:";
	return 0;
}
