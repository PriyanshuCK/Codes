// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size(), row = 0;
    int left1 = 0, right1 = n - 1;
    while (left1 <= right1)
    {
        int mid1 = left1 + (right1 - left1) / 2;
        if (matrix[mid1][0] <= target)
        {
            left1 = mid1 + 1;
        }
        else
        {
            right1 = mid1 - 1;
        }
    }
    row = right1 >= 0 ? right1 : right1 + 1;
    int left2 = 0, right2 = m - 1;
    while (left2 <= right2)
    {
        int mid2 = left2 + (right2 - left2) / 2;
        if (matrix[row][mid2] <= target)
        {
            left2 = mid2 + 1;
        }
        else
        {
            right2 = mid2 - 1;
        }
    }
    right2 = right2 >= 0 ? right2 : right2 + 1;
    return matrix[row][right2] == target ? true : false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, target;
    cin >> n >> m >> target;
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
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}