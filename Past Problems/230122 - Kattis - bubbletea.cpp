// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, minPrice = INT_MAX;
    cin >> n;
    vector<int> tea;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tea.push_back(x);
    }
    int m;
    cin >> m;
    vector<int> toppings;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        toppings.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            if (minPrice > (toppings[x - 1] + tea[i]))
            {
                minPrice = toppings[x - 1] + tea[i];
            }
        }
    }
    int budget;
    cin >> budget;
    cout << ((((budget / minPrice) - 1) < 0) ? 0 : ((budget / minPrice) - 1)) << endl;
    return 0;
}
