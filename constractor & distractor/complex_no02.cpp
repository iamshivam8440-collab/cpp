#include <iostream>
using namespace std;
class Complex2;
class Complex1
{
private:
    int real1;
    int img1;

public:
    Complex1();
    void input1();
    friend void sum(Complex1, Complex2);
};
Complex1::Complex1()
{
    real1 = img1 = 0;
}
void Complex1::input1()
{
    cout << "Enter the real1 and img1:";
    cin >> real1 >> img1;
}
class Complex2
{
private:
    int real2;
    int img2;

public:
    Complex2();
    void input2();
    friend void sum(Complex1, Complex2);
};
Complex2::Complex2()
{
    real2 = img2 = 0;
}
void Complex2::input2()
{
    cout << "Enter the real2 and img2:";
    cin >> real2 >> img2;
}
void sum(Complex1 x, Complex2 y)
{
    int real, img;
    real = x.real1 + y.real2;
    img = x.img1 + y.img2;
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
    Complex1 C1;
    Complex2 C2;
    C1.input1();
    C2.input2();
    sum(C1, C2);
    return 0;
}