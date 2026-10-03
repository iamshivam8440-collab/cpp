#include <iostream>
using namespace std;
int fibo(int);
int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int num;
	cout << "Enter a number:";
	cin >> num;
	cout << "Fibonacci series of " << num << " terms:";
	for (int i = 0; i < num; i++)
	{
		cout << fibo(i) << " ";
	}
	return 0;
}
