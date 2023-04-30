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
        long g, m;
        cin >> g >> m;
        multiset<int> sg, sm;
        for (size_t i = 0; i < g; i++)
        {
            long x;
            cin >> x;
            sg.insert(x);
        }
        for (size_t i = 0; i < m; i++)
        {
            long x;
            cin >> x;
            sm.insert(x);
        }
        while (sm.size() > 0 && sg.size() > 0)
        {
            if (*sg.begin() < *sm.begin())
            {
                sg.erase(sg.begin());
            }
            else
            {
                sm.erase(sm.begin());
            }
        }
        sm.size() > sg.size() ? cout << "MechaGodzilla" << endl : cout << "Godzilla" << endl;
    }
    return 0;
}