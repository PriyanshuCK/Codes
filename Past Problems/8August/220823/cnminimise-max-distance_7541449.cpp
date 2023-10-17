// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getMaxDiff(vector<int> &arr)
{
    int maxDiff = INT_MIN;
    for (size_t i = 1; i < arr.size(); i++)
    {
        maxDiff = max(maxDiff, arr[i] - arr[i - 1]);
    }
    return maxDiff;
}
int getStations(vector<int> &arr, int k, long double n)
{
    int stationsInBetween, count = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        stationsInBetween = (arr[i] - arr[i - 1]) / n;
        if (stationsInBetween * n == arr[i] - arr[i - 1])
        {
            stationsInBetween--;
        }
        count += stationsInBetween;
    }
    return count;
}
long double minimiseMaxDistance(vector<int> &arr, int k)
{
    long double left = 0, right = getMaxDiff(arr);
    while (right - left > 1e-6)
    {
        long double mid = left + (right - left) / 2;
        int stations = getStations(arr, k, mid);
        if (stations <= k)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    return right;
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
    cout << fixed << minimiseMaxDistance(arr, k) << endl;
    return 0;
}