// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main()
{
    Cricketer *dhoni = new Cricketer;

    dhoni->jersey_no = 12;
    dhoni->country = "India";

    Cricketer *kohli = new Cricketer;

    kohli->country = dhoni->country;
    kohli->jersey_no = dhoni->jersey_no;

    delete dhoni;

    cout << kohli->jersey_no;

    return 0;
}
