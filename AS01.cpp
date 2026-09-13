#include<iostream>
using namespace std;
/*     Encapsulation  start     */
class sum{
	int a;
	int b;
	public:
		void getdata()
		{
			cout<<"Enter first number:";
			cin>>a;
			cout<<"Enter second number:";
			cin>>b;
		}
		/*  abstraction  start*/
		int logic()
		{
		    return a+b;
		}
		/*  abstraction  end*/
};
/*     Encapsulation  start     */
int main()
{
	sum s1;
	cout<<"----------------------------\n";
	cout<<"Find sum of two numbers\n";
	cout<<"----------------------------\n";
	s1.getdata();
	int s=s1.logic();
	cout<<"Addition is:"<<s;
	return 0;
}
