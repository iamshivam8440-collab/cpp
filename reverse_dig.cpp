#include <iostream>
using namespace std;
void rev(int);
void rev(int n)
{
	cout << "Reverese digit is:";
	while (n != 0)
	{
		int a = n % 10;
		n = n / 10;
		cout << a;
	}
}
int main()
{
	int n;
	cout << "Enter the number:";
	cin >> n;
	rev(n);
	return 0;
}
