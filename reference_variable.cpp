#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int &b = a;
	// It's another(alias) name of a variable not a new variable //
	cout << "--------Reference variable-------:" << endl;
	cout << "The value of b is:" << b << endl;
	cout << "The value of a is:" << a << endl;
	int x = 10;
	int *y = &x;
	cout << "--------Pointer variable---------:" << endl;
	// It's store the address of the another variable //
	cout << "The value of x is:" << x << endl;
	cout << "The address of y is:" << y << endl;
	cout << "The value of y is:" << *y << endl;
	return 0;
}
