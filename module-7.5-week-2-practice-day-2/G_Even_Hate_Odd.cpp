// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even_count = 0;
        int odd_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        int target = n / 2;
        int ans = abs(even_count - target);
        cout << ans << endl;
    }

    return 0;
}