// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isLessThanThreshold(vector<int> &nums, int threshold, int n)
{
    long long sum = 0;
    for (auto &&i : nums)
    {
        sum += ceil(i / (float)n);
    }
    if (sum <= threshold)
    {
        return true;
    }
    return false;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int low = 1, high = *(max_element(nums.begin(), nums.end())), smallDivisor = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isLessThanThreshold(nums, threshold, mid))
        {
            smallDivisor = min(smallDivisor, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return smallDivisor;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int threshold, n;
    cin >> threshold;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}