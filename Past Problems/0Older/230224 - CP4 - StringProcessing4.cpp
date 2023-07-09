// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s, str;
    while (getline(cin, str) && str != ".......")
    {
        s.append(str + " ");
    }
    vector<string> tokens;
    string token;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        if (s[i] != ' ' && s[i] != '.')
        {
            token.push_back(s[i]);
        }
        else
        {
            if (token != "")
            {
                tokens.push_back(token);
                token.erase();
            }
        }
    }
    sort(tokens.begin(), tokens.end());
    cout << tokens[0] << endl;

    return 0;
}