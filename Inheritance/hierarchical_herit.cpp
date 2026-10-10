#include<iostream>
using namespace std;

class A{
	public:
		void fun()
		{
			cout<<"Food"<<endl;
		}
};

class B:public A{
	public:
		void fun1()
		{
			cout<<"Human"<<endl;
		}
};

class C:public A{
	public:
		void fun2()
		{
			cout<<"Animal"<<endl;
		}
};
int main()
{
	C c1;
	c1.fun();
	c1.fun2();
	
	B b1;
	b1.fun();
	b1.fun1();
	return 0;
}
