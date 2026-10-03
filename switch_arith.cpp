#include <iostream>
using namespace std;
int main()
{
	int num;
	int a, b;
	while (1)
	{
		cout << "-------------------------------------" << endl;
		cout << "Press 1 for addition" << endl;
		cout << "Press 2 for subtraction" << endl;
		cout << "Press 3 for multiplication" << endl;
		cout << "Press 4 for division" << endl;
		cout << "Press 5 for Exit from program" << endl;
		cout << "-------------------------------------" << endl
			 << endl
			 << endl;
		cout << "********************************" << endl;
		cout << "Enter the number:";
		cin >> num;
		cout << "********************************" << endl;
		switch (num)
		{
		case 1:
			cout << "For addition:" << endl;
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			cout << "Addition of " << a << " and " << b << " is:" << a + b << endl;
			break;
		case 2:
			cout << "For subtraction:" << endl;
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			cout << "Subtraction of " << a << " and " << b << " is:" << a - b << endl;
			break;
		case 3:
			cout << "For multiplication:" << endl;
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			cout << "Multiplication of " << a << " and " << b << " is:" << a * b << endl;
			break;
		case 4:
			cout << "For division:" << endl;
			cout << "Enter first number:";
			cin >> a;
			cout << "Enter second number:";
			cin >> b;
			if (b == 0)
			{
				cout << "Division not perform:" << endl;
			}
			else
			{
				cout << "Division of " << a << " and " << b << " is:" << a / b << endl;
			}
			break;
		case 5:
			exit(0);
			cout << "Exit from loop" << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
		}
	}
	return 0;
}
