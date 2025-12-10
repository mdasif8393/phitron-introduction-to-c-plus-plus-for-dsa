
// https://www.codechef.com/problems/RIGHTTHERE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int t, n;
        cin >> t >> n;

        if (n >= t)
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