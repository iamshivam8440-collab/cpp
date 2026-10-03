#include <iostream>
using namespace std;
void digit(int);
void digit(int k)
{
	/* the sum of 2nd and 3rd digit of number */
	int n = k;
	int i = 5, sum = 0;
	while (n != 0)
	{
		int a = n % 10;
		n = n / 10;
		if (i == 3 || i == 2) // sum second and third digit
		{
			sum += a;
		}
		i--;
	}
	cout << "Sum of second and third digit is:" << sum;
}
int main()
{
	int n;
	cout << "Enter five digit number:";
	cin >> n;
	digit(n);
	return 0;
}
