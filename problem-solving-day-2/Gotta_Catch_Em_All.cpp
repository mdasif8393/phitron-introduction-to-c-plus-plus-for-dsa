// https://www.codechef.com/problems/GCEA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    while (w--)
    {
        int t, n, x;
        cin >> t >> n >> x;

        int a[t];

        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        int sum = 0;

        for (int i = 0; i < t; i++)
        {
            int mul = a[i] * n;
            if (mul < x)
            {
                sum = sum + mul;
            }
            else
            {
                sum = sum + x;
            }
        }

        cout << sum << endl;
    };

    return 0;
}