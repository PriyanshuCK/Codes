// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int missingNumber(int A[], int N)
{
    int sum = 0, actualSum = (N * (N + 1)) / 2;
    for (int i = 0; i < N - 1; i++)
    {
        sum += A[i];
    }
    return actualSum - sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> A[i];
    }
    cout << missingNumber(A, n) << endl;
    return 0;
}