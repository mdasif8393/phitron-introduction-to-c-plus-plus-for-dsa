// https://www.codechef.com/problems/P2_175
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int n;
        cin >> n;

        if (n == 1 || n == 3)
        {
            cout << 1 << endl;
        }

        else
        {
            int i = 2;
            int j = 5;

            int count = 1;

            while (true)
            {
                count++;

                if (i == n || j == n)
                {
                    break;
                }

                i += 2;
                j += 2;
            }
            cout << count << endl;
        }
    }

    return 0;
}