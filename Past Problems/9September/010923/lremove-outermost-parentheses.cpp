// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string removeOuterParentheses(string s)
{
    int currentInd = 1, opInd = 0, count = 0;
    while (currentInd < (int)(s.length()))
    {
        if (s[currentInd] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == -1)
        {
            s.erase(opInd, 1);
            currentInd -= 1;
            s.erase(currentInd, 1);
            opInd = currentInd;
            count = 0;
        }
        currentInd++;
    }
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << removeOuterParentheses(s) << endl;
    return 0;
}