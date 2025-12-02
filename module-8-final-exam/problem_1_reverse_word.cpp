// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-08/challenges/replace-word

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        string s, w;
        cin >> s >> w;

        int string_size = s.size();
        int word_size = w.size();

        string result;

        for (int i = 0; i < string_size;)
        {
            bool is_match = true;

            if ((i + word_size - 1) < string_size)
            {
                for (int j = 0; j < word_size; j++)
                {
                    if (s[i + j] != w[j])
                    {
                        is_match = false;
                        break;
                    }
                }
            }
            else
            {
                is_match = false;
            }

            if (is_match)
            {
                result += '#';
                i += word_size;
            }
            else
            {
                result += s[i];
                i++;
            }
        }
        cout << result << endl;
    }

    return 0;
}