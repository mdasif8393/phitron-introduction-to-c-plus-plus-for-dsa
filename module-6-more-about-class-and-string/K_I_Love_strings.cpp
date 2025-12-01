// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;

        cin >> s1 >> s2;

        int min_len = min(s1.size(), s2.size());

        string s;

        for (int i = 0; i < min_len; i++)
        {
            s += s1[i];
            s += s2[i];
        }

        if (s1.size() > s2.size())
        {
            s += s1.substr(min_len);
        }
        else
        {
            s += s2.substr(min_len);
        }

        cout << s << endl;
    }

    return 0;
}