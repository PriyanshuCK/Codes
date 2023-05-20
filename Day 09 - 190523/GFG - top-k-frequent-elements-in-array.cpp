// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> topK(vector<int> &nums, int k)
{
    unordered_map<int, int> freq;
    for (size_t i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }
    vector<pair<int, int>> topFreq;
    for (auto x : freq)
    {
        topFreq.push_back({x.second, x.first});
    }
    sort(topFreq.rbegin(), topFreq.rend());
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        result.push_back(topFreq[i].second);
    }
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> nums, result;
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    result = topK(nums, k);
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}