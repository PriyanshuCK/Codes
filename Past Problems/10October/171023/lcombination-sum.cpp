// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void generateCombinations(set<vector<int>> &result, vector<int> &candidates, int target, vector<int> &temp, int i, int &sum)
{
    if (i >= (int)candidates.size() || sum > target)
    {
        if (sum == target)
        {
            result.insert(temp);
        }
        return;
    }
    temp.push_back(candidates[i]);
    sum += candidates[i];
    generateCombinations(result, candidates, target, temp, i, sum);
    temp.pop_back();
    sum -= candidates[i];
    generateCombinations(result, candidates, target, temp, i + 1, sum);
    return;
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    set<vector<int>> result;
    vector<int> temp;
    int sum = 0;
    generateCombinations(result, candidates, target, temp, 0, sum);
    vector<vector<int>> v;
    for (auto &&i : result)
    {
        v.push_back(i);
    }
    return v;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, target;
    cin >> target;
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    vector<vector<int>> result = combinationSum(nums, target);
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