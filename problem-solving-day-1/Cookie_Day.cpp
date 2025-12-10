// https://www.codechef.com/problems/ADVITIYA3
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

        int a[t];

        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        bool is_divisible = false;
        for (int i = 0; i < t; i++)
        {
            if (a[i] >= n)
            {
                is_divisible = true;
            }
        }

        if (is_divisible)
        {
            int min_number = INT_MAX;

            for (int i = 0; i < t; i++)
            {
                if ((a[i] / n) > 0)
                {
                    int reminder = a[i] % n;
                    if (reminder < min_number)
                    {
                        min_number = reminder;
                    }
                }
            }

            if (min_number > -1)
            {
                cout << min_number << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}