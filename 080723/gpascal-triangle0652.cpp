// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int m = 1000000007;
long long factorial(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (n * (factorial(n - 1) % m)) % m;
}
vector<int> extEuclidAlgo(int a, int b)
{
    if (b == 0)
    {
        return {1, 0, a};
    }
    vector<int> result = extEuclidAlgo(b, a % b);
    int x1 = result[0], y1 = result[1], gcd = result[2];
    int x = y1, y = x1 - (a / b) * y1;
    return {x, y, gcd};
}
int modInv(int b, int m)
{
    vector<int> result = extEuclidAlgo(b, m);
    return (result[0] % m + m) % m;
}
vector<long long> nthRowOfPascalTriangle(int n)
{
    n -= 1;
    vector<long long> result;
    for (int i = 0; i <= n; i++)
    {
        long long a = 1;
        int k = min(i, n - i);
        for (int j = n; j >= n - k + 1; j--)
        {
            a = (a * j) % m;
        }
        long long b = factorial(k);
        result.push_back((a * modInv(b, m)) % m);
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
    vector<long long> result = nthRowOfPascalTriangle(n);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}