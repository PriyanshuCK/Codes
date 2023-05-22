// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void rotate(vector<int> &nums, int k)
{
    vector<int> temp;
    int n = nums.size();
    n < k ? k %= n : k = k;
    for (int i = 0; i < n - k; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = nums[n - k + i];
    }
    for (int i = k; i < n; i++)
    {
        nums[i] = temp[i - k];
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    rotate(nums, k);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}