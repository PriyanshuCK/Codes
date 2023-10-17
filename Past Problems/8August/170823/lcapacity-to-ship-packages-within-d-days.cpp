// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool capacityPossible(vector<int> &weights, int days, int n)
{
    int day = 1, sumOnDay = 0;
    for (auto &&i : weights)
    {
        sumOnDay += i;
        if (sumOnDay > n)
        {
            sumOnDay = i;
            day++;
        }
        if (day > days)
        {
            return false;
        }
    }
    return true;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end()), high = accumulate(weights.begin(), weights.end(), 0), minCap = high;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (capacityPossible(weights, days, mid))
        {
            minCap = min(minCap, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return minCap;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int days, n;
    cin >> days;
    vector<int> weights;
    while (cin >> n)
    {
        weights.push_back(n);
    }
    cout << shipWithinDays(weights, days) << endl;
    return 0;
}