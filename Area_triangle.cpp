#include <iostream>
using namespace std;
float area(float height, float base);
float area(float height, float base)
{
	return (height * base) / 2;
}
int main()
{
	float height, base;
	cout << "Enter the heigth:";
	cin >> height;
	cout << "Enter the base:";
	cin >> base;
	float result = area(height, base);
	cout << "Area of triangle is:" << result;
	return 0;
}
