#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "-------------------------------\n";
	cout << "Find which number is largest:\n";
	cout << "-------------------------------\n";
	cout << "Enter first number:";
	cin >> n1;
	cout << "Enter second number:";
	cin >> n2;
	cout << "Enter third number:";
	cin >> n3;
	if (n1 > n2 && n1 > n3)
		cout << n1 << " is largest:";
	else if (n2 > n1 && n2 > n3)
		cout << n2 << " is largest:";
	else if (n1 == n2 && n2 == n3)
		cout << n1 << "," << n2 << "&" << n3 << " is equal:";
	else
		cout << n3 << " is largest:";
	return 0;
}
