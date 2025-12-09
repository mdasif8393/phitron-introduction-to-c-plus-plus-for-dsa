// https://www.codechef.com/problems/GMGM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min;
    cin >> n >> min;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cout = 0;

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}