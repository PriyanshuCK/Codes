// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findLongestConseqSubseq(int arr[], int N)
{
    int count = 1, maxCount = 1;
    unordered_set<int> setNums;
    for (int i = 0; i < N; i++)
    {
        setNums.insert(arr[i]);
    }
    for (auto &&i : setNums)
    {
        if (setNums.find(i - 1) != setNums.end())
        {
            count = 1;
            continue;
        }
        else
        {
            int temp = i + 1;
            count = 1;
            while (setNums.find(temp) != setNums.end())
            {
                count++;
                maxCount = max(maxCount, count);
                temp++;
            }
        }
    }
    return maxCount;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << findLongestConseqSubseq(a, n) << endl;
    return 0;
}