// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int minEatingSpeed(vector<int> &piles, int h)
{
    int high = *(max_element(piles.begin(), piles.end())), low = 1, k = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long sumX = 0;
        for (size_t i = 0; i < piles.size(); i++)
        {
            if (piles[i] % mid == 0)
            {
                sumX += (piles[i] / mid);
            }
            else
            {
                sumX += (piles[i] / mid) + 1;
            }
        }
        if (sumX <= h)
        {
            k = min(mid, k);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return k;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int h, n;
    cin >> h;
    vector<int> piles;
    while (cin >> n)
    {
        piles.push_back(n);
    }
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}