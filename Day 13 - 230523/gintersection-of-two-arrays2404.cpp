// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    int count = 0;
    unordered_set<int> as, bs;
    for (int i = 0; i < n; i++)
    {
        as.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        bs.insert(b[i]);
    }
    for (auto &&i : as)
    {
        if (bs.find(i) != bs.end())
        {
            count++;
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
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << NumberofElementsInIntersection(arr1, arr2, n, m) << endl;
    return 0;
}