// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isPalindrome(int x)
{
    if (x == 0)
    {
        return true;
    }
    if (x < 0 || x % 10 == 0)
    {
        return false;
    }
    int revHalf = 0;
    int i = (floor(log10(x) + 1)) / 2;
    while (i > 0)
    {
        revHalf = revHalf * 10 + x % 10;
        x /= 10;
        i--;
    }
    return (revHalf == x || revHalf == x / 10);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;
    return 0;
}