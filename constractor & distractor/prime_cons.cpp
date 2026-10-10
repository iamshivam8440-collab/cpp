#include <iostream>
using namespace std;
class prime
{
private:
    int num1;

public:
    prime();
    prime(int);
    void input();
    friend void calculate(prime);
};
prime::prime()
{
    num1 = 0;
}
prime::prime(int i)
{
    num1 = i;
}
void prime::input()
{
    cout << "Enter a number:";
    cin >> num1;
}
void calculate(prime p)
{
    int count = 0;
    for (int i = 1; i <= p.num1; i++)
    {
        if (p.num1 % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << p.num1 << " is prime:";
    }
    else
    {
        cout << p.num1 << " is not prime:";
    }
}
int main()
{
    int k;
    prime p1, p2(k);
    p2.input();
    calculate(p2);
    return 0;
}