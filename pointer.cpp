#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int *ptr;
	ptr = &a;
	cout << "3 ways to print value of a:" << endl;
	cout << a << endl;
	cout << *ptr << endl;
	cout << *(&a) << endl;
	cout << ptr << endl;
	return 0;
}
