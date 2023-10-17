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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        int count = 0, count2 = 0, flag = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
            {
                count++;
                count2++;
            }
            else
            {
                count2--;
            }
            if (count2 + a >= n)
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {

            if (a == n || count2 + a >= n)
            {
                cout << "YES" << endl;
            }
            else
            {

                if (count + a < n)
                {
                    cout << "NO" << endl;
                }
                else if (count + a >= n)
                {
                    cout << "MAYBE" << endl;
                }
            }
        }
    }
    return 0;
}