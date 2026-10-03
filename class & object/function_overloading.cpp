#include <iostream>
using namespace std;
void add(int, int);
void add(int, int, int);
void add(int a, int b)
{
    cout << "Addition is:" << a + b << endl;
}
void add(int x, int y, int z)
{
    cout << "Addition is:" << x + y + z << endl;
}
int main()
{
    add(2, 3);
    add(4, 5, 3);
    return 0;
}