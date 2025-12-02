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

        char c[1001];
        cin >> c;

        cout << c;
        for (int i = 1; i < n; i++)
        {
            cout << " " << c;
        }
        cout << endl;
    }
    return 0;
}