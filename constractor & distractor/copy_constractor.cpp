#include <iostream>
using namespace std;
class Test
{
private:
    int a;

public:
    Test()
    {
        a = 9;
    }
    Test(Test &x)
    {
        a = x.a;
    }
    void show();
};
void Test::show()
{
    int &b = a;
    b++;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{
    Test t;
    // t.show();
    Test t1(t);
    t1.show();
    return 0;
}