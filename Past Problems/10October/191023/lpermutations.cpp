// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void generatePermutations(vector<vector<int>> &result, vector<int> &nums, int i)
{
    if (i == nums.size())
    {
        result.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        generatePermutations(result, nums, i + 1);
        swap(nums[i], nums[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> result;
    generatePermutations(result, nums, 0);
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
    vector<vector<int>> result = permute(nums);
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