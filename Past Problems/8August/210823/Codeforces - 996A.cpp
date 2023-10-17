// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int count = 0;
    count += n / 100;
    n %= 100;
    count += n / 20;
    n %= 20;
    count += n / 10;
    n %= 10;
    count += n / 5;
    n %= 5;
    count += n / 1;
    n %= 1;
    cout << count << endl;
    return 0;
}