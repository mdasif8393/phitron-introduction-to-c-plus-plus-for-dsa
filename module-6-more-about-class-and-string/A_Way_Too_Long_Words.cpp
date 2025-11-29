// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int count = 0;
        for (auto it = s.begin(); it < s.end(); it++)
        {

            count++;
        }

        if (count <= 10)
        {
            cout << s << endl;
        }

        else
        {
            cout << *(s.begin()) << count - 2 << *(s.end() - 1) << endl;
        }
    }

    return 0;
}