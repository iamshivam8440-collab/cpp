#include <iostream>
using namespace std;
int main()
{
	int i, arr[5] = {1, 2, 3, 4, 5};
	int sum = 0;
	cout << "Array index number and their value:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	cout << "Sum of array element is:" << sum << endl;
	return 0;
}
