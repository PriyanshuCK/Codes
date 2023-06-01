// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int sum = arr[0], right = 0, left = 0, n = arr.size(), count = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            count++;
        }
        right++;
        if (right < n)
        {
            sum += arr[right];
        }
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
    int k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << findAllSubarraysWithGivenSum(a, k);
    return 0;
}