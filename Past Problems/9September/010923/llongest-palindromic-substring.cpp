// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string longestPalindrome(string s)
{
    int longSubF = s.size() - 1, longSubL = 0, maxLength = longSubL - longSubF + 1;
    for (int i = 0; i < (int)s.size(); i++)
    {
        int left = i, right = s.size() - 1, subF = right, subL = left, j = s.size() - 1;
        while (left <= right)
        {
            if (s[left] == s[right])
            {
                subF = min(subF, left);
                subL = max(subL, right);
                left++;
                right--;
            }
            else
            {
                subF = right, subL = left;
                right = --j;
                left = i;
            }
        }
        if (maxLength < subL - subF + 1)
        {
            maxLength = subL - subF + 1;
            longSubL = subL;
            longSubF = subF;
        }
    }
    return s.substr(longSubF, maxLength);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}