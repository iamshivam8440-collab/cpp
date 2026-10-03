#include <iostream>
using namespace std;
void armstrong(int);
void greatr(int x, int y, int z);
void leap(int);
void leap(int year)
{
	if ((year % 400 == 0 && year % 4 == 0) || year % 100 != 0)
		cout << "Leap year" << endl
			 << endl;
	else
		cout << "Not leap year:" << endl
			 << endl;
}
void greatr(int x, int y, int z)
{
	if (x > y && x > z)
		cout << "X is greater:" << endl
			 << endl;
	else if (y > x && y > z)
		cout << "Y is greater:" << endl
			 << endl;
	else if (x == y && y == z && z == x)
		cout << "X,Y,Z is same:" << endl
			 << endl;
	else
		cout << "Z is greater:" << endl
			 << endl;
}
void armstrong(int n)
{
	int k, a;
	k = n;
	int sum = 0;
	while (k != 0)
	{
		a = k % 10;
		sum += (a * a * a);
		k = k / 10;
	}
	if (sum == n)
		cout << "Number is Armstrong:" << endl
			 << endl;
	else
		cout << "Number is not Armstrong:" << endl
			 << endl;
}
int main()
{
	int num;
	while (1) // infinite loop
	{
		cout << "************************************" << endl;
		cout << "Press 1 for Armstrong:" << endl;
		cout << "Press 2 for greater number:" << endl;
		cout << "Press 3 for leap year:" << endl;
		cout << "Press 4 for exit program:" << endl;
		cout << "************************************" << endl
			 << endl;
		cout << "------------------------------------" << endl;
		cout << "Enter the number for operation:";
		cin >> num;
		cout << "------------------------------------" << endl;
		switch (num)
		{
		case 1:
			cout << "For Armstrong:" << endl;
			cout << "Enter the number:";
			int n;
			cin >> n;
			armstrong(n);
			break;
		case 2:
			cout << "For find greater:" << endl;
			cout << "Enter three number:";
			int a, b, c;
			cin >> a >> b >> c;
			greatr(a, b, c);
			break;
		case 3:
			cout << "For leap year:" << endl;
			cout << "Enter the year:";
			int year;
			cin >> year;
			leap(year);
			break;
		case 4:
			cout << "Exit for program:" << endl;
			exit(0); // exit for program
			break;
		default:
			cout << "Invalid Input";
			break;
		}
	}
	return 0;
}
