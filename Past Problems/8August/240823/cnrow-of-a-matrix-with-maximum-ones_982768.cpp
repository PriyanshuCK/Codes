// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int minInd = INT_MAX, maxOneRow = 0;
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = m - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (matrix[i][mid] == 1)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        if (left < minInd)
        {
            minInd = left, maxOneRow = i;
        }
    }
    return maxOneRow;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    cout << rowWithMax1s(matrix, n, m) << endl;
    return 0;
}