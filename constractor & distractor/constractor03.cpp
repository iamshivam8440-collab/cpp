// Copy constractor
#include <iostream>
using namespace std;
class student
{
    string name;
    long int ID;
    long int college_code;
    string course;
    string year;
    char section;

public:
    void input()
    {
        cout << "Enter your name:";
        getline(cin >> ws, name);
        cout << "Enter your ID:";
        cin >> ID;
        cout << "Enter your college code:";
        cin >> college_code;
        cout << "Enter your course:";
        getline(cin >> ws, course);
        cout << "Enter your year:";
        getline(cin >> ws, year);
        cout << "Enter your section:";
        cin >> section;
    }
    student()
    {
    }
    student(student &s)
    {
        name = s.name;
        ID = s.ID;
        college_code = s.college_code;
        course = s.course;
        year = s.year;
        section = s.section;
    }
    void display();
};
void student::display()
{
    cout << endl
         << "----------------->Details<-----------------" << endl;
    cout << "Name is:" << name << endl;
    cout << "ID is:" << ID << endl;
    cout << "College code is:" << college_code << endl;
    cout << "Course is:" << course << endl;
    cout << "Year is:" << year << endl;
    cout << "Section is:" << section << endl;
    cout << "--------------------------------------------" << endl;
}
int main()
{
    student s1;
    s1.input();
    student s2(s1);
    s2.display();
    return 0;
}