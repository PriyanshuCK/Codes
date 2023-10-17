// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int myAtoi(string s)
{
    int pos = 0, len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            pos++;
        }
        else
        {
            s.erase(0, pos);
            break;
        }
    }
    bool neg = false;
    if (s[0] == '-')
    {
        neg = true;
        s.erase(0, 1);
    }
    else if (s[0] == '+')
    {
        s.erase(0, 1);
    }
    pos = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            pos++;
        }
        else
        {
            s.erase(0, pos);
            break;
        }
        if (s[i] == '0' && i == s.size() - 1)
        {
            s.erase(0, pos);
        }
    }
    if (s.size() == 0 || s[0] < 48 || s[0] > 57)
    {
        return 0;
    }
    pos = 0, len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            pos++;
        }
        else
        {
            s.erase(pos, s.size() - pos);
            break;
        }
    }

    int n = 0;
    pos = 0, len = s.size();
    for (int i = len - 1; i >= 0; i--)
    {
        int digit = s[i] - 48;
        if (pos < 9 || (pos == 9 && digit == 1) || (pos == 9 && n <= 147483647 && digit == 2))
        {
            n += digit * ceil(pow(10, pos));
        }
        else
        {
            if (neg)
            {
                n = INT_MIN;
                break;
            }
            else
            {
                n = INT_MAX;
                break;
            }
        }
        pos++;
    }
    return (neg && n != INT_MIN) ? -1 * n : n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    getline(cin, s);
    cout << myAtoi(s) << endl;
    return 0;
}