// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void rotateby90(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 2 - i; j >= 0; j--)
        {
            swap(matrix[i][j], matrix[n - 1 - j][n - 1 - i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> x;
        for (int j = 0; j < n; j++)
        {
            int y;
            cin >> y;
            x.push_back(y);
        }
        matrix.push_back(x);
    }
    rotateby90(matrix, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}