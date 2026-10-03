#include <iostream>
using namespace std;
int main()
{
	int a, n, i;
	int power = 1;
	cout << "Enter a number for base:";
	cin >> a;
	cout << "Enter number for power:";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		power *= a;
	}
	cout << "The power of " << n << " times " << a << " is:" << power;
	return 0;
}
