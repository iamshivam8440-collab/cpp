// Default constractor--> No parameter pass
#include <iostream>
using namespace std;
class student
{
    string name;
    long int ID;
    long int college_code;
    string course;
    int year;
    char section;

public:
    student()
    {
        college_code = 1210;
    }
    void show()
    {
        cout << "College code is:" << college_code << endl;
    }
};
/*
student::student()
{
    college_code = 1210;
}
void student::show()
{
    cout << "College code is:" << college_code << endl;
}  */
int main()
{
    student s1;
    s1.show();
    return 0;
}