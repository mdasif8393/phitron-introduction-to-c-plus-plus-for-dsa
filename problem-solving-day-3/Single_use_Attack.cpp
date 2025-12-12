// https://www.codechef.com/problems/SINGLEUSE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int result = 1;

        int remaining_health = h - y;

        int div = remaining_health / x;
        int rem = remaining_health % x;

        // cout << remaining_health << " " << div << " " << rem;

        if (rem > 0)
        {
            result = result + div + 1;
        }
        else
        {
            result = result + div;
        }

        cout << result << endl;
    }

    return 0;
}