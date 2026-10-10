#include<iostream>
using namespace std;

class A{
	public:
		void fun()
		{
			cout<<"Hello ";
		}
};

class B:public A{
	public:
		void fun1()
		{
			cout<<"World!!"<<endl;
		}
};

class C:public B{
	public:
	void fun2()
	{
		cout<<" Good Evening!!";
	}
};
int main()
{
	C a1;
	a1.fun();
	a1.fun1();
	a1.fun2();
	return 0;
}
