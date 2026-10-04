#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

template <typename T>
/*
T add(T a, T b)
{
    return a + b;
}
*/
void mul(T a, T b)
{
    cout << "Multiplication :" << a * b << endl;
}
int main()
{
    // cout << "Template function:" << add(4.3, 5.4) << endl;
    // cout << "Sum Function:" << sum(4.3, 5.4) << endl;
    mul(4, 3);
    return 0;
}