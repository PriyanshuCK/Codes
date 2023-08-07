// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long factorial(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
vector<vector<int>> generate(int numRows)
{
    int n = numRows - 1;
    vector<vector<int>> result;
    for (int h = 0; h < numRows; h++)
    {
        vector<int> row;
        for (int i = 0; i <= h; i++)
        {
            long long a = 1;
            int k = min(i, h - i);
            for (int j = h; j >= h - k + 1; j--)
            {
                a *= j;
            }
            long long b = factorial(k);
            row.push_back(a / b);
        }
        result.push_back(row);
    }
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
    vector<vector<int>> triangle = generate(n);
    for (auto &&i : triangle)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}