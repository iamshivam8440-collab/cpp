// Parameterised constractor--> parameter pass
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
    student(int num)
    {
        ID = num;
    }
    void show();
    /*{
        cout << "ID is:" << ID << endl;
    }*/
};
void student::show()
{
    cout << "ID is:" << ID << endl;
}
int main()
{
    int num;
    cout << "Enter your college ID:";
    cin >> num;
    // student s1(num); // Implicit calling
    student s1 = student(num); // Explicit calling
    s1.show();
    return 0;
}