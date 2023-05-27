// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int majorityElement(vector<int> &nums)
{
    int el = nums[0], count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            el = nums[i];
        }
        else if (nums[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == el)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        return el;
    }
    return -1;
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
    cout << majorityElement(nums) << endl;

    return 0;
}