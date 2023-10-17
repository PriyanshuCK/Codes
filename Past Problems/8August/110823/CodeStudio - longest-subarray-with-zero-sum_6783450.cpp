// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getLongestZeroSumSubarrayLength(vector<int> &arr)
{
    int length = 0, maxLength = 0, sum = 0;
    unordered_map<int, int> sums;
    sums[0] = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sums.find(sum) != sums.end())
        {
            length = i - sums[sum];
            maxLength = max(maxLength, length);
        }
        else
        {
            sums[sum] = i;
        }
    }
    return maxLength;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << getLongestZeroSumSubarrayLength(arr) << endl;
    return 0;
}