#include <iostream>
using namespace std;
int power(int, int);
int power(int n1, int n2)
{
	if (n2 == 0)
		return 1;
	else
		return n1 * power(n1, n2 - 1);
}
int main()
{
	int n1, n2;
	cout << "Enter a number for base:";
	cin >> n1;
	cout << "Enter a number for power:";
	cin >> n2;
	cout << "Base of " << n1 << " is " << n2 << " times:";
	int result = power(n1, n2);
	cout << result;
	return 0;
}
