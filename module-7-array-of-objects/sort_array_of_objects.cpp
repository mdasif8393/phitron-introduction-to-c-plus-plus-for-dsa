#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    // return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;

    if (l.marks == r.marks)
    {
        // if (l.roll < r.roll)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return l.roll < r.roll;
    }
    else
    {
        // if (l.marks > r.marks)
        // {
        //     return true;
        // }
        // else if (l.marks < r.marks)
        // {
        //     return false;
        // }
        return l.marks > r.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}

/*
Input
6
Sakib 15 92
Rakib 18 94
Akib 28 92
Sifat 24 92
Rifat 1 94
Ifat 10 92
*/