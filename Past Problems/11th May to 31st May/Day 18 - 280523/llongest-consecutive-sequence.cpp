// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int count = 1, maxCount = 1;
    unordered_set<int> setNums;
    for (int i = 0; i < nums.size(); i++)
    {
        setNums.insert(nums[i]);
    }
    for (auto &&i : setNums)
    {
        if (setNums.find(i - 1) != setNums.end())
        {
            count = 1;
            continue;
        }
        else
        {
            int temp = i + 1;
            count = 1;
            while (setNums.find(temp) != setNums.end())
            {
                count++;
                maxCount = max(maxCount, count);
                temp++;
            }
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
    cout << longestConsecutive(nums) << endl;

    return 0;
}