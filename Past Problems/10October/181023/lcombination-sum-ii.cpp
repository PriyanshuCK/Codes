// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void generateCombinations(vector<vector<int>> &result, vector<int> candidates, int target, vector<int> &temp, int i, int &sum)
{
    if (sum >= target)
    {
        if (sum == target)
        {
            result.push_back(temp);
        }
        return;
    }
    for (int j = i; j < (int)candidates.size(); j++)
    {
        if (j > i && candidates[j] == candidates[j - 1])
        {
            continue;
        }
        if (candidates[j] > target)
        {
            break;
        }
        temp.push_back(candidates[j]);
        sum += candidates[j];
        generateCombinations(result, candidates, target, temp, j + 1, sum);
        temp.pop_back();
        sum -= candidates[j];
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> temp;
    int sum = 0;
    generateCombinations(result, candidates, target, temp, 0, sum);
    return result;
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
    vector<vector<int>> result = combinationSum2(nums, target);
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