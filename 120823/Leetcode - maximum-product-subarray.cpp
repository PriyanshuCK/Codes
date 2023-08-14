// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int maxProduct(vector<int> &nums)
{
    int productMax = nums[0], productMin = nums[0], maxProduct = productMax;
    for (size_t i = 1; i < nums.size(); i++)
    {
        int tempMax = max(nums[i], max(nums[i] * productMax, nums[i] * productMin));
        productMin = min(nums[i], min(nums[i] * productMax, nums[i] * productMin));
        productMax = tempMax;
        maxProduct = max(maxProduct, max(productMax, productMin));
    }
    return maxProduct;
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
    cout << maxProduct(nums) << endl;
    return 0;
}