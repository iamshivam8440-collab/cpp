#include <iostream>
using namespace std;
// 1. Method
/*
class Add
{
private:
    int x;
    int y;

public:
    // Parameterised constractor
    Add(int i, int j)
    {
        x = i;
        y = j;
    }
    void sum();
};
void Add::sum()
{
    cout << "The sum of x and y is:" << x + y;
}
*/

// 2. Method
/*
class add
{
private:
    int a;
    int b;

public:
    //Default constractor
    add()
    {
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second element:";
        cin >> b;
    }
    void show();
};
void add::show()
{
    cout << "Sum is:" << a + b;
}
*/
// 3. Method
class sum
{
private:
    int x;
    int y;

public:
    sum(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    sum result();
    void display()
    {
        cout << "Sum is:" << x + y;
    }
};
sum sum::result()
{
    sum s(x + y, 0);
    return s;
}
int main()
{
    // Add a1(1, 2);
    // a1.sum();
    // add A1;
    // A1.show();
    int x, y;
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    sum s1(x, y);
    sum s2 = s1.result();
    s2.display();
    return 0;
}