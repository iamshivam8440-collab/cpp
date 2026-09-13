#include<iostream>
using namespace std;
int main()
{
	char ch[]={'H','e','l','l','o','\0'};
	int i; 
	cout<<"Using loop:"<<endl;
	for(i=0;ch[i]!='\0';i++)
	{
		cout<<ch[i];
	}
	cout<<endl<<"Index number:"<<endl;
	for(i=0;ch[i]!='\0';i++)
	{
		cout<<"ch["<<i<<"]="<<ch[i]<<endl;
	}
	cout<<"Direct:";
	cout<<ch<<endl;
	return 0;
}
