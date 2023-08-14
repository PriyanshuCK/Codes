// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(vector<int> &nums, int &count, int left, int mid, int right)
{
    int r = mid + 1;
    for (int l = left; l <= mid; l++)
    {
        // Got wrong answer in some test cases with negative elements ((nums[l] % 2 == 0 && (r <= right && nums[r] < (nums[l] / 2))) || (nums[l] % 2 != 0 && (r <= right && nums[r] <= (nums[l] / 2)))
        // I'm getting the wrong answer even when I'm dry running with those cases.
        while (r <= right && nums[l] > 2 * (long long)nums[r])
        {
            r++;
        }
        count += r - mid - 1;
    }
    vector<int> temp;
    int l = left;
    r = mid + 1;
    while (l <= mid && r <= right)
    {
        if (nums[l] < nums[r])
        {
            temp.push_back(nums[l]);
            l++;
        }
        else
        {
            temp.push_back(nums[r]);
            r++;
        }
    }
    while (l <= mid)
    {
        temp.push_back(nums[l]);
        l++;
    }
    while (r <= right)
    {
        temp.push_back(nums[r]);
        r++;
    }
    for (size_t i = 0; i < temp.size(); i++)
    {
        nums[left + i] = temp[i];
    }
}
void splitReversePairs(vector<int> &nums, int &count, int left, int right)
{
    if (left == right)
    {
        return;
    }
    else
    {
        int mid = (left + right) / 2;
        splitReversePairs(nums, count, left, mid);
        splitReversePairs(nums, count, mid + 1, right);
        merge(nums, count, left, mid, right);
    }
}
int reversePairs(vector<int> &nums)
{
    int count = 0, left = 0, right = nums.size() - 1;
    splitReversePairs(nums, count, left, right);
    return count;
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
    cout << reversePairs(nums) << endl;
    return 0;
}