// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
vector<int> extEuclidAlgo(int a, int b)
{
    if (b == 0)
    {
        return {1, 0, a};
    }
    vector<int> result = extEuclidAlgo(b, a % b);
    int x1 = result[0], y1 = result[1];
    int x = y1;
    int y = x1 - (a / b) * y1;
    int gcd = result[2];
    return {x, y, gcd};
}
int modInv(int a, int m)
{
    vector<int> result = extEuclidAlgo(a, m);
    return (result[2] != 1 ? -1 : (result[0] % m + m) % m);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    cout << modInv(a, b) << endl;
    cout << gcd(a, b) << endl;
    return 0;
}