// https://www.codechef.com/problems/YOGACLASS?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (x * 2 < y)
        {
            int sub = n / 2;
            int rem = n % 2;

            cout << (sub * y) + (rem * x) << endl;
        }
        else
        {
            cout << n * x << endl;
        }
    }

    return 0;
}