// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void MakeZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> tempMatrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tempMatrix[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                int sum = 0;
                if (((i - 1) >= 0))
                {
                    sum += matrix[i - 1][j];
                    tempMatrix[i - 1][j] = 0;
                }
                if (((i + 1) <= n - 1))
                {
                    sum += matrix[i + 1][j];
                    tempMatrix[i + 1][j] = 0;
                }
                if (((j - 1) >= 0))
                {
                    sum += matrix[i][j - 1];
                    tempMatrix[i][j - 1] = 0;
                }
                if (((j + 1) <= m - 1))
                {
                    sum += matrix[i][j + 1];
                    tempMatrix[i][j + 1] = 0;
                }
                tempMatrix[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = tempMatrix[i][j];
        }
    }
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
        vector<int> x;
        for (int j = 0; j < m; j++)
        {
            int y;
            cin >> y;
            x.push_back(y);
        }
        matrix.push_back(x);
    }
    MakeZeros(matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}