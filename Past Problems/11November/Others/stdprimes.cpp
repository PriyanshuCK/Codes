// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<long long> findPrimesTillN()
{
    long long n = 1e+8, sqrtn = sqrt(n);
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i <= sqrtn; i++)
    {
        if (isPrime[i])
        {
            for (long long j = (long long)i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<long long> allPrimes;
    for (long long i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            allPrimes.push_back(i);
        }
    }
    return allPrimes;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<long long> primes = findPrimesTillN();
    for (int i = 0; i < primes.size(); i++)
    {
        if ((i + 1) % 100 == 1)
        {
            cout << primes[i] << endl;
        }
    }
    return 0;
}