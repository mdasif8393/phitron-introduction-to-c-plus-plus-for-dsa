// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 0;
    int j = s.size() - 1;

    int palindrome = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
        }

        i++;
        j--;
    }

    palindrome == 1 ? cout << "YES" : cout << "NO";

    return 0;
}