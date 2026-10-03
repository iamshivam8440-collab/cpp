#include <iostream>
#include <stdlib.h>
using namespace std;
/*  Nested structure   */
struct emp
{
	char name[20];
	int age;
};
struct emp1
{
	char city[30];
	long int PIN;
	char address[50];
	char state[30];
	char country[30];
	struct emp e1;
};
typedef struct JobDetails
{
	long int ID;
	char Department[20];
	int salary;
	struct emp1 e2;
} e3;
int main()
{
	e3 *p;
	int n;
	cout << "How many numbers of employees info entered:";
	cin >> n;
	// Dynamic memory allocation //
	p = (e3 *)calloc(n, sizeof(e3));
	for (int i = 1; i <= n; i++)
	{
		cout << "------------------------------------" << endl;
		cout << "Enployee number " << i << " details:" << endl
			 << endl;
		cout << "Enter name:";
		cin.ignore();
		cin.getline(p[i - 1].e2.e1.name, 50);
		cout << "Enter age:";
		cin >> p[i - 1].e2.e1.age;
		cout << "Enter ID:";
		cin >> p[i - 1].ID;
		cout << "Enter Department:";
		cin >> p[i - 1].Department;
		cout << "Enter salary:";
		cin >> p[i - 1].salary;
		cout << "Enter city:";
		cin >> p[i - 1].e2.city;
		cout << "Enter PIN:";
		cin >> p[i - 1].e2.PIN;
		cout << "Enter address:";
		cin >> p[i - 1].e2.address;
		cout << "Enter state:";
		cin.ignore();
		cin.getline(p[i - 1].e2.state, 50);
		cout << "Enter country:";
		cin >> p[i - 1].e2.country;
		cout << "------------------------------------" << endl;
		cout << endl
			 << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << "------------------------------------" << endl;
		cout << "Employee number " << i << " details:" << endl
			 << endl;
		cout << "Name:";
		cout << p[i - 1].e2.e1.name << endl;
		cout << "Age:";
		cout << p[i - 1].e2.e1.age << endl;
		cout << "ID:";
		cout << p[i - 1].ID << endl;
		cout << "Department:";
		cout << p[i - 1].Department << endl;
		cout << "Salary:";
		cout << p[i - 1].salary << endl;
		cout << "City:";
		cout << p[i - 1].e2.city << endl;
		cout << "PIN:";
		cout << p[i - 1].e2.PIN << endl;
		cout << "Address:";
		cout << p[i - 1].e2.address << endl;
		cout << "State:";
		cout << p[i - 1].e2.state << endl;
		cout << "Country:";
		cout << p[i - 1].e2.country << endl;
		cout << "------------------------------------" << endl;
	}
	return 0;
}
