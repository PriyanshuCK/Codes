// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int left = m - 1, right = n - 1, currentInd = n + m - 1;
    while (left >= 0 && right >= 0)
    {
        if (nums1[left] >= nums2[right])
        {
            nums1[currentInd--] = nums1[left--];
        }
        else
        {
            nums1[currentInd--] = nums2[right--];
        }
    }
    while (right >= 0)
    {
        nums1[currentInd--] = nums2[right--];
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = m + 1; i <= m + n; i++)
    {
        nums1.push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    merge(nums1, m, nums2, n);
    for (auto &&i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}