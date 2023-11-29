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
    int a, b;
    while (cin >> a >> b && a != 0 && b != 0)
    {
        vector<int> aC, bC;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            aC.push_back(x);
        }
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            bC.push_back(x);
        }
        int ai = 0, bi = 0, countA = 0, countB = 0, prevA = 0, prevB = 0;
        while (ai < a && bi < b)
        {
            if (aC[ai] == bC[bi])
            {
                ai++;
                bi++;
                while (ai > 0 && aC[ai] == aC[ai - 1])
                {
                    ai++;
                }
                while (bi > 0 && bC[bi] == bC[bi - 1])
                {
                    bi++;
                }
            }
            else
            {
                if (aC[ai] < bC[bi])
                {
                    if (aC[ai] != prevA)
                    {
                        countA++;
                        prevA = aC[ai];
                        ai++;
                    }
                    while (aC[ai] == prevA)
                    {
                        ai++;
                    }
                }
                else
                {
                    if (bC[bi] != prevB)
                    {
                        countB++;
                        prevB = bC[bi];
                        bi++;
                    }
                    while (bC[bi] == prevB)
                    {
                        bi++;
                    }
                }
            }
        }
        while (ai < a)
        {
            if (aC[ai] != prevA)
            {
                countA++;
                prevA = aC[ai];
                ai++;
            }
            while (aC[ai] == prevA)
            {
                ai++;
            }
        }
        while (bi < b)
        {
            if (bC[bi] != prevB)
            {
                countB++;
                prevB = bC[bi];
                bi++;
            }
            while (bC[bi] == prevB)
            {
                bi++;
            }
        }
        cout << min(countA, countB) << endl;
    }

    return 0;
}