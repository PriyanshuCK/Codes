// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] == X)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, x;
    cin >> n >> m >> x;
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
    cout << matSearch(matrix, n, m, x) << endl;
    return 0;
}