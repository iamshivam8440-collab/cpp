#include <iostream>
using namespace std;
#include "dec.h" //function declaration in Sum.h
#include "sum.h" // function define in sum.h
int main()
{
    cout << "Addition is:" << sum(4, 5) << endl;
    cout << "Subtraction is:" << sub(5, 4) << endl;
    cout << "Multiplication is:" << mul(5, 4) << endl;
    return 0;
}