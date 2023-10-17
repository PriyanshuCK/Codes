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
        int n, count = 0;
        cin >> n;
        vector<int> v;
        while (n)
        {
            int lastDig = n % 10;
            if (lastDig != 0)
            {
                v.push_back(lastDig * round(pow(10, count + (v.size() > 0 ? floor(log10(v.back() * 10)) : 0))));
                count = 0;
            }
            else
            {
                count++;
            }

            n /= 10;
        }
        cout << v.size() << endl;
        for (auto &&i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}