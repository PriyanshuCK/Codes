// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// bool isValid(int col, int row, vector<string> board, int n)
// {
//     int originalRow = row, originalCol = col;
//     while (row >= 0 && col >= 0)
//     {
//         if (board[row][col] == 'Q')
//         {
//             return false;
//         }
//         row--;
//         col--;
//     }
//     row = originalRow, col = originalCol;
//     while (col >= 0)
//     {
//         if (board[row][col] == 'Q')
//         {
//             return false;
//         }
//         col--;
//     }
//     row = originalRow, col = originalCol;

//     while (row < n && col >= 0)
//     {
//         if (board[row][col] == 'Q')
//         {
//             return false;
//         }
//         row++;
//         col--;
//     }
//     return true;
// }
void generateValidBoard(vector<vector<string>> &result, vector<string> &board, int n, int col, vector<bool> &leftRow, vector<bool> &upperDiag, vector<bool> &lowerDiag)
{
    if (col == n)
    {
        result.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (leftRow[row] == false && lowerDiag[row + col] == false && upperDiag[n - 1 + col - row] == false)
        {
            board[row][col] = 'Q';
            leftRow[row] = true, lowerDiag[row + col] = true, upperDiag[n - 1 + col - row] = true;
            generateValidBoard(result, board, n, col + 1, leftRow, upperDiag, lowerDiag);
            board[row][col] = '.';
            leftRow[row] = false, lowerDiag[row + col] = false, upperDiag[n - 1 + col - row] = false;
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> result;
    string s(n, '.');
    vector<string> board(n, s);
    vector<bool> leftRow(n, false), upperDiag(2 * n - 1, false), lowerDiag(2 * n - 1, false);
    generateValidBoard(result, board, n, 0, leftRow, upperDiag, lowerDiag);
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<string>> result = solveNQueens(n);
    for (auto &&i : result)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}