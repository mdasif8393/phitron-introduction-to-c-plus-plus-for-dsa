#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        (*this).roll = roll; // dereference a pointer to access their value
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(11, 5, 3.7);
    Student karim(22, 4, 3.45);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}
