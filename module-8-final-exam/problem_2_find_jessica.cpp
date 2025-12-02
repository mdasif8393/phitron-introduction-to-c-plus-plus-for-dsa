// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/find-jessica
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool is_found = false;

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            is_found = true;
        }
    };

    (is_found == true) ? cout << "YES" : cout << "NO";
    return 0;
}