// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void generateSubsets(vector<vector<int>> &result, vector<int> nums, vector<int> &temp, int i)
{
    result.push_back(temp);
    for (int j = i; j < nums.size(); j++)
    {
        if (j != i && nums[j] == nums[j - 1])
        {
            continue;
        }
        temp.push_back(nums[j]);
        generateSubsets(result, nums, temp, j + 1);
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> temp;
    generateSubsets(result, nums, temp, 0);
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
    vector<vector<int>> result = subsetsWithDup(nums);
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