// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    unordered_set<long long> sums;
    sums.insert(0);
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sums.find(sum - k) != sums.end())
        {
            count++;
        }
        if (sums.find(sum) == sums.end())
        {
            sums.insert(sum);
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
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << findAllSubarraysWithGivenSum(arr, k) << endl;
    return 0;
}