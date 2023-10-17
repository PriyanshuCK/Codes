// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findKthPositive(vector<int> &arr, int k)
{
    int left = 1, right = 2000;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (left == right)
        {
            return mid;
        }
        int justSmallerEl = upper_bound(arr.begin(), arr.end(), mid) - arr.begin() - 1;
        if (mid - justSmallerEl - 1 == k)
        {
            if (justSmallerEl >= 0 && mid == arr[justSmallerEl])
            {
                right = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if (mid - justSmallerEl - 1 < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int k, n;
    cin >> k;
    vector<int> arr;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    cout << findKthPositive(arr, k) << endl;
    return 0;
}