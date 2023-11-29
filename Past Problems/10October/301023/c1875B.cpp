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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a, b;
        long long suma = 0, sumb = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            suma += x;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            sumb += x;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 1; i <= k; i++)
        {
            if (k % 2 != 0)
            {
                if (a.size() > 0 && b.size() > 0 && (b[b.size() - 1] > a[a.size() - 1]))
                {
                    int tempa = a[0];
                    int tempb = b[b.size() - 1];
                    a.erase(a.begin());
                    b.pop_back();
                    a.push_back(tempb);
                    int j = 0;
                    while (b[j] < tempa)
                    {
                        j++;
                    }
                    b.insert(b.begin() + j, tempa);
                    suma -= tempa;
                    suma += tempb;
                    sumb -= tempb;
                    sumb += tempa;
                }
            }
            else
            {
                if (a.size() > 0 && b.size() > 0 && b[b.size() - 1] < a[a.size() - 1])
                {
                    int tempb = b[0];
                    int tempa = a[a.size() - 1];
                    b.erase(b.begin());
                    a.pop_back();
                    b.push_back(tempa);
                    int j = 0;
                    while (a[j] < tempb)
                    {
                        j++;
                    }
                    b.insert(a.begin() + j, tempa);
                    suma -= tempa;
                    suma += tempb;
                    sumb -= tempb;
                    sumb += tempa;
                }
            }
        }
        cout << suma << endl;
    }
    return 0;
}