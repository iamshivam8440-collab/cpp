#include <iostream>
using namespace std;
void employee(float);
void employee(float salary)
{
	float DA, HRA;
	if (salary <= 15000)
	{
		HRA = (10 * salary) / 100;
		DA = (90 * salary) / 100;
		float gross = HRA + DA + salary;
		cout << "Gross salary is:" << gross << endl;
	}
	else
	{
		HRA = (50 * salary) / 100;
		DA = (98 * salary) / 100;
		float gross = HRA + DA + salary;
		cout << "Gross salary is:" << gross << endl;
	}
}
int main()
{
	float salary;
	cout << "Enter salary:";
	cin >> salary;
	employee(salary);
	return 0;
}
