#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = img = 0;
    }
    void input();
    void sum(Complex, Complex);
    void show();
};
void Complex::input()
{
    cout << "Enter the real and img part:";
    cin >> real >> img;
}
void Complex::sum(Complex x, Complex y)
{
    real = x.real + y.real;
    img = x.img + y.img;
}
void Complex::show()
{
    if (img < 0)
    {
        cout << real << img << "i";
    }
    else
    {
        cout << real << "+" << img << "i";
    }
}
int main()
{
    Complex C1, C2, C3;
    C1.input();
    C2.input();
    C3.sum(C1, C2);
    C3.show();
    return 0;
}