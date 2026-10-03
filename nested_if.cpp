#include <iostream>
using namespace std;
void star(int);
void star(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			(i < j) ? cout << "*" : cout << " "; // ternary operator
		}
		cout << endl;
	}
}
int main()
{
	//	int i,j;
	int n;
	cout << "Enter the number:";
	cin >> n;
	star(n);
	return 0;
}
