#include<iostream>
using namespace std;

class A{
	public:
		void fun()
		{
			cout<<"Human"<<endl;
		}
};

class B{
	public:
		void fun1()
		{
			cout<<"Boys"<<endl;
		}
};

class C:public A,public B{
	public:
		void fun2()
		{
			cout<<"Girls"<<endl;
		}
};
int main()
{
	C c1;
	c1.fun();
	c1.fun1();
	c1.fun2();
	return 0;
}
