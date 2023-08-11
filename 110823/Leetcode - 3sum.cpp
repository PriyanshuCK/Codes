// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<vector<int>> threeSum(vector<int> &nums)
{
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
    vector<vector<int>> result = threeSum(nums);
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