// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int count(vector<int> &arr, int n, int x)
{
    int lowerBound = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int upperBound = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
    if (lowerBound == n || arr[lowerBound] != x)
    {
        return 0;
    }
    return upperBound - lowerBound + 1;
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
    cout << count(arr, n, x) << endl;
    return 0;
}