// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getUpperBound(vector<int> &arr, int x, int left, int right)
{
    if (arr[right] <= x)
    {
        return right + 1;
    }
    if (arr[left] > x)
    {
        return left;
    }
    if (left == right)
    {
        return left;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] <= x)
    {
        return getUpperBound(arr, x, mid + 1, right);
    }
    return getUpperBound(arr, x, left, mid);
}
int upperBound(vector<int> &arr, int x, int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[right] <= x)
        {
            return right + 1;
        }
        if (arr[left] > x)
        {
            return left;
        }
        if (left == right)
        {
            return left;
        }
        if (arr[mid] <= x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    // return getUpperBound(arr, x, 0, n - 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, x;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        arr.push_back(y);
    }
    cout << upperBound(arr, x, n) << endl;
    return 0;
}