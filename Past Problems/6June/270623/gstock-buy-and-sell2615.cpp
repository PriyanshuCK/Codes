// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void stockBuySell(int price[], int n)
{
    vector<pair<int, int>> days;
    int sInd = 0, eInd = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (price[i + 1] > price[i] || (price[i + 1] == price[i] && sInd != i))
        {
            eInd = i + 1;
            if (i == n - 2 && eInd > sInd)
            {
                days.push_back({sInd, eInd});
            }
        }
        else
        {
            if (eInd > sInd)
            {
                days.push_back({sInd, eInd});
            }
            sInd = i + 1;
            eInd = i + 1;
        }
    }
    if (days.empty())
    {
        cout << "No Profit" << endl;
    }
    else
    {
        for (auto &&i : days)
        {
            cout << "(" << i.first << " " << i.second << ") ";
        }
        cout << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    stockBuySell(price, n);
    return 0;
}