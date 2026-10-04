#include <iostream>
using namespace std;
int main()
{
    /* lambda function
        [capture list](paramater)->return type{
            // function body;
        };

    */

    /*
        auto fun = []()
        {
            cout << "Hello World!" << endl;
        };
        fun();
    cout << "Done!" << endl;
    */

    // lambda function call it directly
    /*
     []()
     {
         cout << "Hello World!" << endl;
     }();
     */

    // something return
    /*
     auto sum = [](int a, int b)
     {
         return a + b;
     };
     cout << "Sum is:" << sum(4, 5) << endl;
     */

    // return type
    /*
    auto fun1 = [](double a, double b) -> int
    {
        return a + b;
    };
    auto fun2 = [](double a, double b)
    {
        return a + b;
    };
    double a = 2.5;
    double b = 7.6;
    auto result1 = fun1(a, b);
    auto result2 = fun2(a, b);
    cout << "Output of result1 is:" << result1 << endl;
    cout << "Output of result2 is:" << result2 << endl;
    cout << "sizeof(result1):" << sizeof(result1) << endl;
    cout << "sizeof(result2):" << sizeof(result2) << endl;
    */
    // capture list
    int a = 10;
    int b = 20;
    auto sum = [a, b]()
    {
        cout << "a + b =" << a + b << endl;
    };
    sum();
    return 0;
}