// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int largest(vector<int> &arr, int n)
{
    int max = -1, secMax = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        if (arr[i] > secMax && arr[i] != max)
        {
            secMax = arr[i];
        }
    }
    return secMax;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << largest(arr, n) << endl;

    return 0;
}