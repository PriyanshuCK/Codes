// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findLongestConseqSubseq(int arr[], int N)
{
    int length = 0;
    unordered_map<int, int> minData;
    for (int i = 0; i < N; i++)
    {
        minData[arr[i]] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        int mini = arr[i], maxi = arr[i];
        while (minData.find(mini - 1) != minData.end() && minData[mini] == 0)
        {
            minData[mini] = -1;
            mini = mini - 1;
            if (minData[mini] > 0)
            {
                mini = minData[mini];
            }
        }
        minData[maxi] = mini;
        length = max(length, maxi - mini + 1);
    }
    return length;
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