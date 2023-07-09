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
        int q;
        vector<int> queries;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            queries.push_back(x);
        }
        string s;
        int count = 0, prevQ = queries[0];
        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i] >= prevQ && count == 0)
            {
                s.push_back('1');
                prevQ = queries[i];
            }
            else
            {
                if (count == 0 && queries[i] <= queries[0])
                {
                    s.push_back('1');
                    prevQ = queries[i];
                    count++;
                }
                else
                {
                    if (queries[i] <= queries[0] && queries[i] >= prevQ)
                    {
                        s.push_back('1');
                        prevQ = queries[i];
                    }
                    else
                    {
                        s.push_back('0');
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}