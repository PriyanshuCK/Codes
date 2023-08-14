// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getLowerBound(vector<int> arr, int x, int left, int right)
{
    int mid = (left + right) / 2;
    if (left > right)
    {
        return right + 1;
    }
    if (x <= arr[mid])
    {
        return getLowerBound(arr, x, left, mid - 1);
    }
    return getLowerBound(arr, x, mid + 1, right);
}
int lowerBound(vector<int> arr, int n, int x)
{
    int left = 0, right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return right;
    // return getLowerBound(arr, x, 0, n - 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x, n;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        arr.push_back(y);
    }
    cout << lowerBound(arr, n, x) << endl;
    return 0;
}