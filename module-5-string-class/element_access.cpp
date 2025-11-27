#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // S[i] -> access the ith index of the string.
    cout << s[1] << endl;

    // s.at(i) -> access the ith index of the string.
    cout << s.at(1) << endl;

    // s.back() -> access the last element of the string.
    cout << s.back() << endl;

    // s.front() -> access the first element of the string.
    cout << s.front() << endl;
    return 0;
}