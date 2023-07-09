// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
    {
        return;
    }

    if (nums[n - 1] > nums[n - 2])
    {
        swap(nums[n - 1], nums[n - 2]);
        return;
    }
    else
    {
        int maxi = n - 1, pivot = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                reverse(nums.begin(), nums.end());
                return;
            }
            if (nums[i] > nums[i - 1])
            {
                pivot = i - 1;
                break;
            }
        }
        for (int i = n - 1; i > pivot; i--)
        {
            if (nums[i] > nums[pivot])
            {
                maxi = i;
                break;
            }
        }
        swap(nums[maxi], nums[pivot]);
        reverse(nums.begin() + pivot + 1, nums.end());
        return;
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
    nextPermutation(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}