#include <iostream>
using namespace std;
void signal(char);
void signal(int light)
{

	if (light == 1)
	{
		cout << "----------------------\n";
		cout << "Signal is Green-Go!!" << endl;
		cout << "----------------------\n";
	}
	else if (light == 2)
	{
		cout << "----------------------\n";
		cout << "Signal is Red-Stop!!" << endl;
		cout << "----------------------\n";
	}
	else
	{
		cout << "----------------------\n";
		cout << "Signal is Yellow-Wait!!" << endl;
		cout << "----------------------\n";
	}
}
int main()
{
	int light;
	cout << "Signal light color:" << endl;
	cout << "--------------------" << endl;
	cout << "1.Green" << endl
		 << "2.Red" << endl
		 << "3.Yellow" << endl;
	cout << "--------------------" << endl;
	cout << "*************************************\n";
	cout << "Enter number for signal light color:" << endl;
	cout << "1 for Green" << endl
		 << "2 for Red" << endl
		 << "3 for Yellow" << endl;
	cout << "*************************************\n";
	cout << "Enter signal light color:";
	cin >> light;
	signal(light);
	return 0;
}