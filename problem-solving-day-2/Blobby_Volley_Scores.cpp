// https://www.codechef.com/problems/BLOBBYVOLLEY
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

        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int alice_count = 0;
        int bob_count = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] == 'A' && a[i + 1] == 'A')
            {
                alice_count++;
            }
            else if (a[i] == 'B' && a[i + 1] == 'B')
            {
                bob_count++;
            }
        }

        if (a[0] == 'A')
        {
            alice_count = alice_count + 1;
        }

        cout << alice_count << " " << bob_count << endl;
    }

    return 0;
}