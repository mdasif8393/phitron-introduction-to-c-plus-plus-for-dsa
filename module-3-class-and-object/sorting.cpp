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
    sort(a, a + n); // a = 1st index of array. a + n = last index of array + 1

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
};