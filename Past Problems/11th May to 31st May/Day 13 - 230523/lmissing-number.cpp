// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int missingNumber(vector<int> &nums)
{
    int N = nums.size();
    int sum = 0, actualSum = (N * (N + 1)) / 2;
    for (int i = 0; i < N - 1; i++)
    {
        sum += nums[i];
    }
    return actualSum - sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << missingNumber(nums) << endl;
    return 0;
}