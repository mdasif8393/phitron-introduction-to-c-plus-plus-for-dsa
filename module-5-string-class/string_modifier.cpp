#include <bits/stdc++.h>
using namespace std;

int main()
{
    // s+= -> append another string.
    string s = "Hello World";
    string s2 = "Hi";

    // s += s2;
    cout << s2 << endl;

    // .append() -> append another string.

    // s.append(s2);
    cout << s << endl;

    // s.push_back() -> add a character to the last of the string.
    // s.push_back('!');
    cout << s << endl;

    // s.pop_back() -> remove the last character of the string.
    // s.pop_back();
    cout << s << endl;

    // s= -> assign string.
    // s = s2;
    cout << s << endl;

    // s.assign() -> assign string.
    // s.assign(s2);
    cout << s << endl;

    // s.erase() -> erase characters from the string.
    // s.erase(3, 2);
    cout << s << endl;

    // s.replace() -> replace a portion of the string.
    // s.replace(6, 5, "Bangladesh");
    // s.replace(6, 0, "Bangladesh ");
    cout << s << endl;

    // insert() -> insert a portion to a specific position.
    // s.insert(5, " Piash");
    cout << s << endl;

    return 0;
}