// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> findPeakGrid(vector<vector<int>> &mat)
{
    int n = mat.size(), m = mat[0].size(), left = 0, right = m - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2, maxEl = INT_MIN, ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxEl < mat[i][mid])
            {
                maxEl = mat[i][mid];
                ind = i;
            }
        }
        if (((mid == 0) && (mid < m - 1) && (mat[ind][mid] > mat[ind][mid + 1])) || ((mid > 0) && (mid == m - 1) && (mat[ind][mid] > mat[ind][mid - 1])) || (m == 1) || ((mid > 0) && (mid < m - 1) && (mat[ind][mid] > mat[ind][mid - 1]) && (mat[ind][mid] > mat[ind][mid + 1])))
        {
            return {ind, mid};
        }
        if ((mid == 0 && mat[ind][mid] < mat[ind][mid + 1]) || (mid > 0 && mid < m - 1 && mat[ind][mid] > mat[ind][mid - 1] && mat[ind][mid] < mat[ind][mid + 1]))
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return {-1, -1};
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        mat.push_back(row);
    }
    vector<int> res = findPeakGrid(mat);
    for (auto &&i : res)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}