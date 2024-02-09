#include <iostream>
#include <string>

using namespace std;

class Student
{
    int Roll;
    string Name;
    int Marks1, Marks2, Marks3;

public:
    void getdata()
    {
        cout << "Enter the Roll number of the student: ";
        cin >> Roll;

        cout << "Enter the Name of the student: ";
        cin >> Name;

        cout << "Enter the Marks of the student in 3 subjects: ";
        cin >> Marks1 >> Marks2 >> Marks3;
    }

    void display()
    {
        cout << "Roll number of the student: " << Roll << endl;
        cout << "Name of the student: " << Name << endl;
        cout << "Marks of the student in 3 subjects are: " << Marks1 << ", " << Marks2 << ", " << Marks3 << endl;
    }

    void setdata(int r, string n, int m1, int m2, int m3)
    {
        Roll = r;
        Name = n;
        Marks1 = m1;
        Marks2 = m2;
        Marks3 = m3;
    }
};

int main()
{
    Student s;
    s.getdata();
    cout << "\nDisplaying student details:\n";
    s.display();
    return 0;
}