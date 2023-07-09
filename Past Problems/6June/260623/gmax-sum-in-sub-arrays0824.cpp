// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long pairWithMaxSum(long long arr[], long long N)
{
    long long maximum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] + arr[i + 1] > maximum)
        {
            maximum = arr[i] + arr[i + 1];
        }
    }
    return maximum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << pairWithMaxSum(a, n) << endl;
    return 0;
}