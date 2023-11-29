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
        string s;
        cin >> s;
        int d = 0;
        float a = 0;
        vector<float> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '/')
            {
                if (d != 0)
                {

                    for (int j = 0; j < d - 1; j++)
                    {
                        v[j] += 1;
                    }
                    d--;
                    v[v.size() - 1] += 0.5;
                    a += v[v.size() - 1];
                    v.erase(v.end() - 1);
                }
            }
            else if (s[i] == '\\')
            {
                v.push_back(0.5);
                d++;
                for (int j = 0; j < d - 1; j++)
                {
                    v[j] += 1;
                }
            }
            else
            {
                for (int j = 0; j < d; j++)
                {
                    v[j] += 1;
                }
            }
        }
        cout << (int)a << endl;
    }
    return 0;
}