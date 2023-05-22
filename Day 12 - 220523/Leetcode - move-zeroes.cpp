// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void moveZeroes(vector<int> &nums)
{
    int j = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] != 0 && nums[i] == 0)
        {
            j = i;
        }
        if (nums[i] != 0 && nums[j] == 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
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
    moveZeroes(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}