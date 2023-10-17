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
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        switch (s[0])
        {
        case 'T':
            sum += 4;
            break;
        case 'C':
            sum += 6;
            break;
        case 'O':
            sum += 8;
            break;
        case 'D':
            sum += 12;
            break;
        case 'I':
            sum += 20;
            break;

        default:
            break;
        }
    }
    cout << sum << endl;
    return 0;
}