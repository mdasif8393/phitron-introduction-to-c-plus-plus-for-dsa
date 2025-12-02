#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string w;
    cin >> w;

    stringstream ss(s);

    string word;

    int count = 0;

    while (ss >> word)
    {
        if (word == w)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}