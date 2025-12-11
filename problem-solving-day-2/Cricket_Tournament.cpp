// https://www.codechef.com/problems/CRICKETUDYAM
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int t, n;
        cin >> t >> n;

        int result = t - 1;

        if (result >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}