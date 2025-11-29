// https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ACount = 0;
    int DCount = 0;

    for (auto it = s.begin(); it < s.end(); it++)
    {
        if (*it == 'A')
        {
            ACount++;
        }
        else
        {
            DCount++;
        }
    }

    if (ACount > DCount)
    {
        cout << "Anton";
    }
    if (DCount > ACount)
    {
        cout << "Danik";
    }
    if (DCount == ACount)
    {
        cout << "Friendship";
    }

    return 0;
}