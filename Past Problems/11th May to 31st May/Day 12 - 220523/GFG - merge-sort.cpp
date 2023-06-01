// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(int arr[], int l, int m, int r)
{
    int pl = l, pr = m + 1;
    vector<int> temp;
    while (pl <= m && pr <= r)
    {
        if (arr[pl] <= arr[pr])
        {
            temp.push_back(arr[pl]);
            pl++;
        }
        else
        {
            temp.push_back(arr[pr]);
            pr++;
        }
    }
    while (pl <= m)
    {
        temp.push_back(arr[pl]);
        pl++;
    }
    while (pr <= r)
    {
        temp.push_back(arr[pr]);
        pr++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
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