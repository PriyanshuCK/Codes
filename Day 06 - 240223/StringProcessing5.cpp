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
    unordered_map<string, int> tokenFreq;
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
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokenFreq.find(tokens[i]) != tokenFreq.end())
        {
            tokenFreq[tokens[i]]++;
        }
        else
        {
            tokenFreq[tokens[i]] = 1;
        }
    }
    int maxFreq = 0;
    for (auto &&x : tokenFreq)
    {
        if (maxFreq < x.second)
        {
            maxFreq = x.second;
            token = x.first;
        }
    }
    cout << token << " " << maxFreq << endl;
    return 0;
}