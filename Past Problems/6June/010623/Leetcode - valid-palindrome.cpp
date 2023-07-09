// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

bool isPalindrome(string s)
{
    string str, temp;
    for (auto &&i : s)
    {
        if (isalnum(i))
        {
            if (isalpha(i))
            {
                str.push_back(tolower(i));
            }
            else
            {
                str.push_back(i);
            }
        }
    }
    temp = str;
    reverse(str.begin(), str.end());
    if (temp == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    getline(cin, s);
    cout << isPalindrome(s) << endl;
    return 0;
}