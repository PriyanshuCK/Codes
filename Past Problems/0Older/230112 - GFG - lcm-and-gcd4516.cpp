// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long gcd(long long A, long long B)
{
    if (B % A == 0)
    {
        return A;
    }
    return gcd(B % A, A);
}
vector<long long> lcmAndGcd(long long A, long long B)
{
    vector<long long> v;
    long long lcm = (A * B) / gcd(A, B);
    v.push_back(lcm);
    v.push_back(gcd(A, B));
    return v;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << lcmAndGcd(a, b)[0] << " " << lcmAndGcd(a, b)[1] << endl;
    return 0;
}