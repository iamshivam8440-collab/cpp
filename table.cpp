#include <iostream>
using namespace std;
int main()
{
	int i, num;
	cout << "Enter the number for table:";
	cin >> num;
	for (i = 1; i <= 10; i++)
	{
		cout << num << " x " << i << " = " << num * i;
		cout << endl;
	}
	return 0;
}
