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
        int g, m;
        cin >> g >> m;
        vector<int> sg, sm;
        for (size_t i = 0; i < g; i++)
        {
            int x;
            cin >> x;
            sg.push_back(x);
        }
        for (size_t i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sm.push_back(x);
        }
        sort(sg.begin(), sg.end());
        sort(sm.begin(), sm.end());
        while (sm.size() > 0 && sg.size() > 0)
        {
            if (sg[0] < sm[0])
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