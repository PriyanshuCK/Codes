// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int romanToInt(string s)
{
    int n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'I':
            if (i < s.size() - 1 && s[i + 1] == 'V')
            {
                n += 4;
                i++;
            }
            else if (i < s.size() - 1 && s[i + 1] == 'X')
            {
                n += 9;
                i++;
            }
            else
            {
                n += 1;
            }
            break;
        case 'V':
            n += 5;
            break;
        case 'X':
            if (i < s.size() - 1 && s[i + 1] == 'L')
            {
                n += 40;
                i++;
            }
            else if (i < s.size() - 1 && s[i + 1] == 'C')
            {
                n += 90;
                i++;
            }
            else
            {
                n += 10;
            }
            break;
        case 'L':
            n += 50;
            break;
        case 'C':
            if (i < s.size() - 1 && s[i + 1] == 'D')
            {
                n += 400;
                i++;
            }
            else if (i < s.size() - 1 && s[i + 1] == 'M')
            {
                n += 900;
                i++;
            }
            else
            {
                n += 100;
            }
            break;
        case 'D':
            n += 500;
            break;
        case 'M':
            n += 1000;
            break;

        default:
            break;
        }
    }
    return n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
    return 0;
}