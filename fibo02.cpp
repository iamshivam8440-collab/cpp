#include <iostream>
using namespace std;
int main()
{
	int num;
	int first = 0, second = 1, next;
	cout << "Enter a number for n term fibonacci series:";
	cin >> num;
	cout << "Fibonacci series of " << num << " term:";
	cout << first << " ";
	cout << second << " ";
	for (int i = 1; i < num - 1; i++)
	{
		next = first + second;
		cout << next << " ";
		first = second;
		second = next;
	}
	return 0;
}
