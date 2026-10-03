#include <iostream>
using namespace std;
int main()
{
	int i = 0, j, k = 0;
	/* for loop */
	cout << "For loop:" << endl;
	for (j = 0; j < 10; j++)
	{
		cout << j << ": I LOVE C++" << endl;
	}
	/* while loop */
	cout << "While loop:" << endl;
	while (k < 10)
	{
		cout << k << ": I LOVE C++" << endl;
		k++;
	}
	/*  do while loop */
	cout << "Do-while loop:" << endl;
	do
	{
		cout << i << ". I LOVE C++" << endl;
		i++;
	} while (i < 10);
	return 0;
}
