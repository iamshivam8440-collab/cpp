#include <iostream>
using namespace std;
int fact(int n);
int fact(int n)
{
	int i;
	int factorial = 1;
	for (i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main()
{
	int r, n;
	cout << "Enter the value of n:";
	cin >> n;
	cout << "Enter the value of r:";
	cin >> r;
	int result = 0;
	result = fact(n) / (fact(n - r) * fact(n));
	cout << "Combinaton is:" << result << endl;
	int npr = 0;
	npr = fact(n) / (fact(n - r));
	cout << "Permutation is:" << npr << endl;
	return 0;
}
