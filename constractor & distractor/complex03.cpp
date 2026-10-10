#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex();
    void input();
    Complex sum(Complex);
    void show();
};
Complex::Complex()
{
    real = img = 0;
}
void Complex::input()
{
    cout << "Enter the real and img part:";
    cin >> real >> img;
}
Complex Complex::sum(Complex x)
{
    Complex t;
    t.real = real + x.real;
    t.img = img + x.img;
    return t;
}
void Complex::show()
{
    if (img < 0)
    {
        cout << "Output is:" << real << img << "i";
    }
    else
    {
        cout << "Output is:" << real << "+" << img << "i";
    }
}
int main()
{
    Complex C1, C2, C3;
    C1.input();
    C2.input();
    C3 = C2.sum(C1);
    C3.show();
    return 0;
}