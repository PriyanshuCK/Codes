// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    unordered_multimap<int, int> numbers;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (numbers.find(target - nums[i]) == numbers.end())
        {
            numbers.insert({nums[i], i});
        }
        else
        {
            result.push_back(i);
            result.push_back(numbers.find(target - nums[i])->second);
        }
    }
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> result = twoSum(nums, target);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}