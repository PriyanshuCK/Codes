// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getCount(string &s, string &t)
{
    int count = 0;
    int sLength = s.length(), tLength = t.length();
    if (sLength != tLength)
    {
        return -1;
    }
    int fs0 = 0, fs1 = 0, ft0 = 0, ft1 = 0, fr0 = 0, fr1 = 0, f00 = 0, f01 = 0, f10 = 0, f11 = 0, fq0 = 0, fq1 = 0, fq = 0, f0to1 = 0;
    for (int i = 0; i < sLength; i++)
    {
        if (s[i] == '0' && t[i] == '0')
        {
            f00++;
        }
        else if (s[i] == '0' && t[i] == '1')
        {
            f01++;
        }
        else if (s[i] == '1' && t[i] == '0')
        {
            f10++;
        }
        else if (s[i] == '1' && t[i] == '1')
        {
            f11++;
        }
        else if (s[i] == '?' && t[i] == '0')
        {
            fq0++;
        }
        else if (s[i] == '?' && t[i] == '1')
        {
            fq1++;
        }
    }
    fs0 = f00 + f01;
    fs1 = f10 + f11;
    ft0 = f00 + f10 + fq0;
    ft1 = f01 + f11 + fq1;
    fr0 = ft0 - fs0;
    fr1 = ft1 - fs1;
    fq = fq0 + fq1;
    if (fr1 < 0)
    {
        return -1;
    }
    int fr1track = fr1;
    for (int i = 0; i < sLength; i++)
    {
        if (fr1track >= fq && s[i] == '?' && fr1track != 0)
        {
            s[i] = '1';
            count++;
            fr1track--;
        }
        if (fr1track < fq && s[i] == '?' && t[i] == '1' && fr1track != 0)
        {
            s[i] = '1';
            count++;
            fr1track--;
        }
    }
    for (int i = 0; i < sLength; i++)
    {
        if (fr1track != 0 && s[i] == '?')
        {
            s[i] = '1';
            count++;
            fr1track--;
        }
    }
    for (int i = 0; i < sLength; i++)
    {
        if (s[i] == '?')
        {
            s[i] = '0';
            count++;
        }
    }
    for (int i = 0; i < sLength; i++)
    {
        if (s[i] == '0' && t[i] == '1')
        {
            f0to1++;
        }
    }
    count += f0to1;
    return count;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int c;
    cin >> c;
    int n = 1;
    while (c + 1 != n)
    {
        string s, t;
        cin >> s >> t;
        cout << "Case " << n << ": " << getCount(s, t) << endl;
        n++;
    }

    return 0;
}
