// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int numOfSubArr(vector<int> &arr, int n)
{
    int numOfSubArrays = 1, currSum = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (currSum + arr[i] <= n)
        {
            currSum += arr[i];
        }
        else
        {
            numOfSubArrays++;
            currSum = arr[i];
        }
    }
    return numOfSubArrays;
}
int splitArray(vector<int> &nums, int k)
{
    int left = *max_element(nums.begin(), nums.end()), right = accumulate(nums.begin(), nums.end(), 0);
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (numOfSubArr(nums, mid) <= k)
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
    int k, n;
    cin >> k;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << splitArray(nums, k) << endl;
    return 0;
}