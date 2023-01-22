// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;

    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f * i) % M;
    return f;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            const unsigned int M = 1000000007;
            unsigned long long result = (factorial(n) * ((n * (n - 1)) % M)) % M;
            cout << result << endl;
        }
    }
    return 0;
}