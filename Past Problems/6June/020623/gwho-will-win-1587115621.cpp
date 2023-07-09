// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int binarySearch(int left, int right, int arr[], int K)
{
    if (right < left)
    {
        return -1;
    }

    int mid = (left + right) / 2;
    if (arr[mid] == K)
    {
        return 1;
    }
    else if (arr[mid] > K)
    {
        return binarySearch(left, mid - 1, arr, K);
    }
    else if (arr[mid] < K)
    {
        return binarySearch(mid + 1, right, arr, K);
    }
    return -1;
}
int searchInSorted(int arr[], int N, int K)
{
    int left = 0, right = N - 1;
    return binarySearch(left, right, arr, K);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << searchInSorted(a, n, k) << endl;

    return 0;
}