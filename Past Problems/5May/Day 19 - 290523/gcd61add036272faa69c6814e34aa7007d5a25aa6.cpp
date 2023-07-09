// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findK(vector<vector<int>> &a, int n, int m, int k)
{
    int left = 0, top = 0, right = m - 1, bottom = n - 1;
    while (k)
    {
        for (int i = left; i <= right; i++)
        {
            if (k == 1)
            {
                return a[top][i];
            }
            k--;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            if (k == 1)
            {
                return a[i][right];
            }
            k--;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            if (k == 1)
            {
                return a[bottom][i];
            }
            k--;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            if (k == 1)
            {
                return a[i][left];
            }
            k--;
        }
        left++;
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> x;
        for (int j = 0; j < m; j++)
        {
            int y;
            cin >> y;
            x.push_back(y);
        }
        matrix.push_back(x);
    }
    cout << findK(matrix, n, m, k) << endl;

    return 0;
}