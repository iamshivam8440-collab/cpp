#include <iostream>
using namespace std;
int main()
{
	int *ptr; // create pointer variable
	int a;
	cout << "Enter the dynamically allocated memory:";
	cin >> a;
	// initilise dynamic memory
	ptr = new int(a);
	cout << "Value of a:" << a << endl;
	cout << "Addresss of a:" << &a << endl;
	cout << "Allocated memeory:" << *ptr << endl;
	cout << "Address of ptr:" << &ptr << endl;
	// realease the memory
	delete ptr;
	return 0;
}
