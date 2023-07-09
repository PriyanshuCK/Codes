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
bool check(vector<int> &nums)
{
    vector<int> temp, original, original2;
    int n = nums.size();
    original = nums;
    original2 = nums;
    cout << "original: ";
    for (auto &&i : original)
    {
        cout << i << ' ';
    }
    cout << endl;
    sort(nums.begin(), nums.end());
    cout << "nums: ";
    for (auto &&i : nums)
    {
        cout << i << ' ';
    }
    cout << endl;
    for (int k = 0; k < n; k++)
    {
        original = original2;
        rotate(original, k);
        cout << k << " original: ";
        for (auto &&i : original)
        {
            cout << i << ' ';
        }
        cout << endl;
        if (nums == original)
        {
            return true;
        }
    }
    return false;
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
    cout << check(nums) << endl;
    return 0;
}