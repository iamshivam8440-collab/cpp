#include <iostream>
using namespace std;

typedef struct st
{
    string name;
    string father_n;
    string mother_n;
    string gender;
    string course;
    int ID;
    string year;
    string distric;
    string state;
    int pincode;
} s;
int main()
{
    s *ptr;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore(); // skip newline after number

    ptr = new s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "----------------------------------" << endl;
        cout << "Enter student " << i + 1 << " details:" << endl;
        cout << "----------------------------------" << endl;

        cout << "Enter student name: ";
        getline(cin, ptr[i].name);

        cout << "Enter father's name: ";
        getline(cin, ptr[i].father_n);

        cout << "Enter mother's name: ";
        getline(cin, ptr[i].mother_n);

        cout << "Enter gender: ";
        getline(cin, ptr[i].gender);

        cout << "Enter course: ";
        getline(cin, ptr[i].course);

        cout << "Enter ID: ";
        cin >> ptr[i].ID;
        cin.ignore();

        cout << "Enter college year: ";
        getline(cin, ptr[i].year);

        cout << "Enter district: ";
        getline(cin, ptr[i].distric);

        cout << "Enter state: ";
        getline(cin, ptr[i].state);

        cout << "Enter pincode: ";
        cin >> ptr[i].pincode;
        cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "----------------------------------" << endl;
        cout << "Student " << i + 1 << " student details:" << endl;
        cout << "----------------------------------" << endl;
        cout << "Student name:" << ptr[i].name << endl;
        cout << "Enter father's name:" << ptr[i].father_n << endl;
        cout << "Enter mother's name:" << ptr[i].mother_n << endl;
        cout << "Enter your gander:" << ptr[i].gender << endl;
        cout << "Enter your course:" << ptr[i].course << endl;
        cout << "Enter your ID:" << ptr[i].ID << endl;
        cout << "Enter your college year:" << ptr[i].year << endl;
        cout << "Enter distric:" << ptr[i].distric << endl;
        cout << "Enter state:" << ptr[i].state << endl;
        cout << "Enter pincode:" << ptr[i].pincode << endl;
    }
    delete[] ptr;
    return 0;
}
