// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> findPrimesTillN(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (long long j = (long long)i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int> allPrimes;
    for (int i = 2; i <= n; i++)
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
    int n;
    cin >> n;
    vector<int> primesTillN = findPrimesTillN(n);
    for (auto &&i : primesTillN)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}