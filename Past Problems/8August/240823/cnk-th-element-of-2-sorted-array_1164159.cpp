// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
{
    if (n > m)
    {
        return kthElement(arr2, arr1, m, n, k);
    }

    int left = max(0, k - m), right = min(k, n);
    while (left <= right)
    {
        int mid = (left + right) >> 1;
        // int mid = (left + right) >> 1;
        int mid1 = mid, mid2 = k - mid, l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 - 1 >= 0)
        {
            l1 = arr1[mid1 - 1];
        }
        if (mid2 - 1 >= 0)
        {
            l2 = arr2[mid2 - 1];
        }
        if (mid1 < n)
        {
            r1 = arr1[mid1];
        }
        if (mid2 < m)
        {
            r2 = arr2[mid2];
        }
        if (l2 <= r1 && l1 <= r2)
        {
            return max(l1, l2);
        }
        else if (l1 > r2)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr1, arr2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    cout << kthElement(arr1, arr2, n, m, k) << endl;
    return 0;
}