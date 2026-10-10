#include<iostream>
using namespace std;

class A{
	public:
		void fun()
		{
			cout<<"Grandfather"<<endl;
		}
};

class B{
	public:
		void fun1()
		{
			cout<<"Grandmother"<<endl;
		}
};

class C:public A,public B{
	public:
		void fun2()
		{
			cout<<"Son"<<endl;
		}
};

class D:public C{
	public:
		void fun3()
		{
			cout<<"Grandson"<<endl;
		}
};
class E:public D{
	public:
		void fun4()
		{
			cout<<"Grand-daughter"<<endl;
		}
};
int main()
{
	E e1;
	e1.fun();
	e1.fun1();
	e1.fun2();
	e1.fun3();
	e1.fun4();
	return 0;
}
