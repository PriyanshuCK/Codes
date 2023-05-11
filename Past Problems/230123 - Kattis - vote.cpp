// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxVotes = INT_MIN, sum = 0, index = 0;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (maxVotes < x)
            {
                maxVotes = x;
                index = i;
            }
            if (m.find(x) == m.end())
            {
                m[x] = 1;
            }
            else
            {
                m[x]++;
            }
        }
        if (m[maxVotes] != 1)
        {
            cout << "no winner" << endl;
        }

        else if (maxVotes > sum / 2)
        {
            cout << "majority winner " << index + 1 << endl;
        }
        else
        {
            cout << "minority winner " << index + 1 << endl;
        }
    }
    return 0;
}