#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    string s;

    cin.ignore();
    getline(cin, s); // input string with space
    cout << x << endl
         << s << endl;

    return 0;
}