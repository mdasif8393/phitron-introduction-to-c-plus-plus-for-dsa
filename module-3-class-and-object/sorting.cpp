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
    sort(a, a + n, greater<int>()); // a = 1st index of array. a + n = last index of array + 1
    // greater is built in function with array data type

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // greater is built in function with array data type
    }

    return 0;
};