#include<iostream>
using namespace std;
/* base class */
class A{
	public:
		void fun()
		{
			cout<<"Human"<<endl;
		}
};
/* derived class */
class B:public A{
	public:
		void fun1()
		{
			cout<<"Child"<<endl;
		}
};
int main()
{
	B a1;
	a1.fun();
	a1.fun1();
	return 0;
}
