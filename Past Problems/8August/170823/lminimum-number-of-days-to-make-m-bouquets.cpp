// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int minDays(vector<int> &bloomDay, int m, int k)
{
    int minDays = -1, low = *(min_element(bloomDay.begin(), bloomDay.end())), high = *(max_element(bloomDay.begin(), bloomDay.end()));
    while (low <= high)
    {
        int mid = low + (high - low) / 2, countK = 0, countM = 0;
        for (size_t i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= mid)
            {
                countK++;
                if (countK == k)
                {
                    countM++;
                    countK = 0;
                }
            }
            else
            {
                if (countK != 0)
                {
                    countK = 0;
                }
            }
            if (countM == m)
            {
                minDays = mid;
                break;
            }
        }
        if (countM < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return minDays;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int m, k, n;
    cin >> m >> k;
    vector<int> bloomDay;
    while (cin >> n)
    {
        bloomDay.push_back(n);
    }
    cout << minDays(bloomDay, m, k) << endl;
    return 0;
}