// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findKRotation(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1, mini = INT_MAX, r = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < mini)
        {
            mini = arr[mid];
            r = mid;
        }
        if (arr[right] < arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return r;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    vector<int> arr;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    cout << findKRotation(arr) << endl;
    return 0;
}