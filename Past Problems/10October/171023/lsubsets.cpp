// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void generateSubsets(vector<vector<int>> &result, vector<int> &nums, int i, vector<int> &temp)
{
    if (i >= (int)nums.size())
    {
        result.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    generateSubsets(result, nums, i + 1, temp);
    temp.pop_back();
    generateSubsets(result, nums, i + 1, temp);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> result;
    vector<int> temp;
    generateSubsets(result, nums, 0, temp);
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    vector<vector<int>> result = subsets(nums);
    for (auto &&i : result)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}