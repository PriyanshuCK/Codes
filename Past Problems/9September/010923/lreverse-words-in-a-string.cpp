// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int chCount = 0, opInd = 0;
    for (int i = 0; i < (int)(s.size()); i++)
    {
        if (s[i] == ' ')
        {
            if (chCount == 0)
            {
                opInd = i;
            }
            chCount++;
        }
        else if (s[i] != ' ' && chCount > 1)
        {
            s.erase(opInd, chCount - 1);
            i -= chCount - 1;
            chCount = 0;
        }
        else if (s[i] != ' ' && chCount == 1)
        {
            chCount = 0;
        }
    }
    if (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    while (s[s.size() - 1] == ' ')
    {
        s.pop_back();
    }
    s.push_back(' ');
    opInd = 0, chCount = 0;
    for (int i = 0; i < (int)(s.size()); i++)
    {
        if (s[i] != ' ')
        {
            if (chCount == 0)
            {
                opInd = i;
            }
            chCount++;
        }
        if (s[i] == ' ')
        {
            reverse(s.begin() + opInd, s.begin() + opInd + chCount);
            chCount = 0;
        }
    }
    s.pop_back();
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
    return 0;
}