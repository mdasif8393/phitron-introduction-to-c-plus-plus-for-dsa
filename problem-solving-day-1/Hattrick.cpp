// https://www.codechef.com/problems/HATTRICK?tab=
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        string a[6];

        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }

        int is_hattrick = 0;

        for (int i = 0; i < 6; i++)
        {
            if (a[i] == "W" && a[i + 1] == "W" && a[i + 2] == "W")
            {
                is_hattrick = 1;
            }
        }

        if (is_hattrick == 1)
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