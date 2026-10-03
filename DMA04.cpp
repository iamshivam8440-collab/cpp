#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a size of array:";
	cin >> a;
	int *p = new int[a];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter the element of array:";
		cin >> p[i];
	}
	cout << "Array is:";
	for (int i = 0; i < a; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	if (a == NULL)
		cout << "Memory not allocated:" << endl;
	else
		cout << "Memory allocated is:" << *p;
	delete p;
	return 0;
}
