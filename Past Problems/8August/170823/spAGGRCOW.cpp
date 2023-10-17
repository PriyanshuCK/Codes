// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getMinDist(vector<int> &stalls, int k, int n)
{
    int prevStall = stalls[0], i = 1, minDist = INT_MAX;
    k--;
    while (k)
    {
        if (stalls[i] >= n + prevStall)
        {
            minDist = min(minDist, stalls[i] - prevStall);
            prevStall = stalls[i];
            k--;
        }
        i++;
        if (i >= (int)(stalls.size()))
        {
            break;
        }
    }
    return k > 0 ? INT_MAX : minDist;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int left = 1, right = ceil((stalls[stalls.size() - 1] - stalls[0] + 1) / (float)(k - 1)) - 1, maxDist = INT_MIN;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int minDist = getMinDist(stalls, k, mid);
        if (minDist != INT_MAX)
        {
            maxDist = max(maxDist, minDist);
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return maxDist;
}
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
        int k, n;
        cin >> k;
        vector<int> stalls;
        while (cin >> n)
        {
            stalls.push_back(n);
        }
        cout << aggressiveCows(stalls, k) << endl;
    }

    return 0;
}