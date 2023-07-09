// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int isPalindrome(string S)
{
    string reversedString = S;
    reverse(S.begin(), S.end());
    return S == reversedString ? 1 : 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << isPalindrome(s);
    return 0;
}