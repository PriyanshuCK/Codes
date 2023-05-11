// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, b, h, w;
    while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
    {
        vector<int> prices;
        int minPrice = INT_MAX;
        int beds[h][w];
        for (int i = 0; i < h; i++)
        {
            int p;
            cin >> p;
            prices.push_back(p);
            for (int j = 0; j < w; j++)
            {
                int a;
                cin >> a;
                beds[i][j] = a;
            }
        }
        for (int i = 0; i < h; i++)
        {
            if (prices[i] * n < b)
            {
                sort(beds[i], beds[i] + w);
                if (beds[i][w - 1] >= n)
                {
                    minPrice = min(minPrice, (prices[i] * n));
                }
            }
        }
        if (minPrice < INT_MAX)
        {
            cout << minPrice << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }
    return 0;
}