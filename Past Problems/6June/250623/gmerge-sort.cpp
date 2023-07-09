// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(int arr[], int l, int m, int r)
{
    vector<int> v;
    int f = l, s = m + 1;
    while (f <= m && s <= r)
    {
        if (arr[f] < arr[s])
        {
            v.push_back(arr[f]);
            f++;
        }
        else
        {
            v.push_back(arr[s]);
            s++;
        }
    }
    while (f <= m)
    {
        v.push_back(arr[f]);
        f++;
    }
    while (s <= r)
    {
        v.push_back(arr[s]);
        s++;
    }
    for (int i = 0; i < r - l + 1; i++)
    {
        arr[l + i] = v[i];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}