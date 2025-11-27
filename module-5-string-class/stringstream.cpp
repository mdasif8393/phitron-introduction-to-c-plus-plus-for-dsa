#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // get ss object from stringstream class
    stringstream ss(s);

    string word;

    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
    }
    return 0;
}