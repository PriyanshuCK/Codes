// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> newArr(nums.size(), 0);
    int pos = 0, neg = 1;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            newArr[pos] = nums[i];
            pos += 2;
        }
        else
        {
            newArr[neg] = nums[i];
            neg += 2;
        }
    }
    return newArr;
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
    vector<int> result = rearrangeArray(nums);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}