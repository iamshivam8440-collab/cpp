/* Length of the string:*/
#include<iostream>
using namespace std;
#define SIZE 100
void ch1( string ch);
void ch1(string ch)
{
    int i,count=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ') /* space not count */
        {
            continue;
        }
        ++count;
    }
    cout<<"Length of string:"<<count<<endl;
}
int main()
{
    string ch;
    cout<<"Enter your string:";
    getline(cin>>ws,ch);
    ch1(ch);
    return 0;
}