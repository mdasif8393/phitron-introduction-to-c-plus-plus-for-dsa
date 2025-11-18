// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int summation = a + b;
    long long int multiplication = a * b;
    long long int subtraction = a - b;

    cout << a << " + " << b << " = " << summation << endl;
    cout << a << " * " << b << " = " << multiplication << endl;
    cout << a << " - " << b << " = " << subtraction;

    return 0;
}