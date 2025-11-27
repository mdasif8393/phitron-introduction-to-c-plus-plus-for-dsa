#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    // s.size() -> returns the size of the string.
    cout << s.size() << endl;

    // s.max_size() -> returns the maximum size that string can hold.
    cout << s.max_size() << endl;

    // s.capacity() -> returns current available capacity of the string.
    cout << s.capacity() << endl;

    // s.clear() -> clear the string.
    // s.clear();

    // s.empty() -> return true/false if the string is empty.
    if (s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // s.resize() -> change the size of the string.
    s.resize(15, 'x');

    cout << s << endl;

    return 0;
}