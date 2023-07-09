// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0, maxCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            count++;
            if (maxCount < count)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
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
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}