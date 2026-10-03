#include <iostream>
using namespace std;
int main()
{
	// pointer declaration
	int *ptr;
	int a;
	cout << "Enter the value:";
	cin >> a;
	// Dynamic memory allocation
	ptr = new int(a);
	// Output
	cout << "Memory allocated:" << *ptr;
	// Delete/free pointer variable
	delete ptr;
	return 0;
}
