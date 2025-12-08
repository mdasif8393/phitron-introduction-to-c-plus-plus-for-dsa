// https://www.codechef.com/problems/ROOMALLOC
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
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int div = a[i] / 2;
            count += div;

            int rem = a[i] % 2;

            if (rem > 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}