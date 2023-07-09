// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
vector<long long> lcmAndGcd(long long A, long long B)
{
    long long a = max(A, B), b = min(A, B);
    vector<long long> result;
    result.push_back((a * b) / gcd(a, b));
    result.push_back(gcd(a, b));
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long a, b;
    cin >> a >> b;
    vector<long long> result = lcmAndGcd(a, b);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}