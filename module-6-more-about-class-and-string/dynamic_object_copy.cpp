#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->jersey = jersey;
        this->country = country;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 100);

    Cricketer *kohli = new Cricketer("India", 19);

    *kohli = *dhoni;

    delete dhoni;

    cout << kohli->country << " " << kohli->jersey;

    return 0;
}