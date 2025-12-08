// https://www.codechef.com/problems/MINCARS
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

        int count = 0;
        int div = n / 4;

        count += div;

        int rem = n % 4;

        if (rem > 0)
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}