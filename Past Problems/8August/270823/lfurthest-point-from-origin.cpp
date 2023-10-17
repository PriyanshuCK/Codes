// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int furthestDistanceFromOrigin(string moves)
{
    int l = 0, r = 0, d = 0;
    for (int i = 0; i < moves.size(); i++)
    {
        if (moves[i] == 'L')
        {
            l++;
        }
        else if (moves[i] == 'R')
        {
            r++;
        }
        else
        {
            d++;
        }
    }
    return max(r, l) - min(r, l) + d;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << furthestDistanceFromOrigin(s) << endl;
    return 0;
}