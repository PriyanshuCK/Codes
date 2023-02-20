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
    while (t)
    {

        int n, m, sum = 0;
        cin >> n >> m;
        vector<vector<int>> prizes;
        vector<int> stickers;
        for (int i = 0; i < n; i++)
        {
            vector<int> p1;
            int k;
            cin >> k;
            p1.push_back(k);
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                p1.push_back(x);
            }
            int prize;
            cin >> prize;
            p1.push_back(prize);
            prizes.push_back(p1);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            stickers.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int mini = INT_MAX;
            vector<int> res;
            for (int j = 0; j < prizes[i][0]; j++)
            {
                res.push_back(prizes[i][j + 1]);
                if (mini > stickers[res[j] - 1])
                {
                    mini = stickers[res[j] - 1];
                }
            }

            sum += mini * prizes[i][(prizes[i][0] + 1)];
        }
        cout << sum << endl;
        t--;
    }

    return 0;
}