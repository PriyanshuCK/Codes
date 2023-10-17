// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size(), n2 = nums2.size();
    if (n1 > n2)
    {
        return findMedianSortedArrays(nums2, nums1);
    }
    int left = 0, right = n1, n = (n1 + n2 + 1) / 2, total = n1 + n2;
    while (left <= right)
    {
        int mid1 = (left + right) >> 1, mid2 = n - mid1;
        int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1)
        {
            r1 = nums1[mid1];
        }
        if (mid2 < n2)
        {
            r2 = nums2[mid2];
        }
        if (mid1 - 1 >= 0)
        {
            l1 = nums1[mid1 - 1];
        }
        if (mid2 - 1 >= 0)
        {
            l2 = nums2[mid2 - 1];
        }
        if (l1 <= r2 && l2 <= r1)
        {
            if (total % 2 == 0)
            {
                return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
            }
            else
            {
                return max(l1, l2);
            }
        }
        else if (l1 > r2)
        {
            right = mid1 - 1;
        }
        else
        {
            left = mid1 + 1;
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
    int n, m;
    cin >> n >> m;
    vector<int> nums1, nums2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    cout << fixed << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}