#include <iostream>
using namespace std;
class Box
{
    double width;

public:
    Box()
    {
        width = 0;
    }
    Box(double w)
    {
        width = w;
    }
    Box input(double);
    friend void show(Box);
};
Box Box::input(double w)
{
    cout << "Enter your value:";
    cin >> w;
    return w;
}
void show(Box t)
{
    cout << "Value is:" << t.width;
}
int main()
{
    double k;
    Box b1, b2;
    b2 = b1.input(k);
    show(b2);
    return 0;
}