// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int searchSingle(int A[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
    {
        return -1;
    }
    if (low == high)
    {
        return A[mid];
    }
    if (mid % 2 == 0)
    {
        if (A[mid] == A[mid + 1])
        {
            return searchSingle(A, mid + 2, high);
        }
        else
        {
            return searchSingle(A, low, mid);
        }
    }
    else
    {
        if (A[mid] == A[mid - 1])
        {
            return searchSingle(A, mid + 1, high);
        }
        else
        {
            return searchSingle(A, low, mid - 1);
        }
    }
}
int search(int A[], int N)
{
    return searchSingle(A, 0, N - 1);
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
    cout << search(a, n) << endl;
    return 0;
}