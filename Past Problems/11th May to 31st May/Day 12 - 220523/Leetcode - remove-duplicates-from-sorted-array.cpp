// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int removeDuplicates(vector<int> &nums)
{
    vector<int> newArr;
    int n = nums.size();
    newArr.push_back(nums[0]);
    for (int i = 1; i < n; i++)
    {
        if (*newArr.rbegin() != nums[i])
        {
            newArr.push_back(nums[i]);
        }
    }
    int count = newArr.size();
    for (int i = 0; i < count; i++)
    {
        nums[i] = newArr[i];
    }

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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << removeDuplicates(nums) << endl;
    for (int i = 0; i < removeDuplicates(nums); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}