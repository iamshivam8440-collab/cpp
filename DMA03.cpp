#include <iostream>
using namespace std;
int main()
{
	int *k;
	int a;
	cout << "Enter the allocated memory:";
	cin >> a;
	k = new int;
	*k = a;
	cout << "Value of i:";
	for (int i = 0; i <= *k; i++)
	{
		cout << i << " ";
	}
	delete k;
	return 0;
}
