// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int numOfStudents(vector<int> &arr, int n)
{
    int numOfStd = 1, pagesHolding = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (pagesHolding + arr[i] <= n)
        {
            pagesHolding += arr[i];
        }
        else
        {
            numOfStd++;
            pagesHolding = arr[i];
        }
    }
    return numOfStd;
}
int findPages(vector<int> &arr, int n, int m)
{
    if (n < m)
    {
        return -1;
    }
    int left = *max_element(arr.begin(), arr.end()), right = accumulate(arr.begin(), arr.end(), 0);
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (numOfStudents(arr, mid) <= m)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return right + 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> m;
    vector<int> arr;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    cout << findPages(arr, n, m) << endl;
    return 0;
}