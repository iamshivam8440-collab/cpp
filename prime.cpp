#include <iostream>
using namespace std;
void prime(int n);
void prime(int n)
{
	int count = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	(count <= 2) ? cout << "Number is prime:" : cout << "Number is not prime:"; // ternary operator (condition)?TRUE:FALSE;
}
int main()
{
	int n;
	cout << "Enter the number:";
	cin >> n;
	prime(n);
	return 0;
}
