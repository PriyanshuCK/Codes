// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> unionArr;
    unionArr.push_back(min(arr1[0], arr2[0]));
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == min(arr1[i], arr2[j]) && unionArr[unionArr.size() - 1] < arr1[i])
        {
            unionArr.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] == min(arr1[i], arr2[j]) && unionArr[unionArr.size() - 1] < arr2[j])
        {
            unionArr.push_back(arr2[j]);
            j++;
        }
        if (arr1[i] == min(arr1[i], arr2[j]) && unionArr[unionArr.size() - 1] >= arr1[i])
        {
            i++;
        }
        else if (arr2[j] == min(arr1[i], arr2[j]) && unionArr[unionArr.size() - 1] >= arr2[j])
        {
            j++;
        }
    }
    while (i < n)
    {
        if (unionArr[unionArr.size() - 1] < arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionArr[unionArr.size() - 1] < arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
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
    vector<int> unionArr = findUnion(arr1, arr2, n, m);
    for (auto &&i : unionArr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}