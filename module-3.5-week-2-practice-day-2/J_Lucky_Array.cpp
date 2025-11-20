// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int count;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        cout << "Lucky";
    }
    else if (count % 2 == 0)
    {
        cout << "Unlucky";
    }
    return 0;
}
