// https://www.codechef.com/problems/MINBOTTLES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }

        // cout << sum;

        int sub = sum / x;
        int rem = sum % x;

        int result = sub;
        if (rem > 0)
        {
            result += 1;
        }

        cout << result << endl;
    }

    return 0;
}