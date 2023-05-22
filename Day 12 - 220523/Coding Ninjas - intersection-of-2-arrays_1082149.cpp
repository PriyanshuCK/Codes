// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    vector<int> intersection;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            intersection.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersection;
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
    vector<int> intersection = NumberofElementsInIntersection(arr1, arr2, n, m);
    for (auto &&i : intersection)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}