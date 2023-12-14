// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> getPrimesTillN(int n)
{
    int sqrtn = sqrt(n);
    vector<bool> primes(n + 2, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i <= sqrtn; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    vector<int> primesTillN;
    for (int i = 0; i < n + 2; i++)
    {
        if (primes[i])
        {
            primesTillN.push_back(i);
        }
    }
    return primesTillN;
}
bool isAlmostPrime(int n, vector<int> primesTillN)
{
    int i = 0, count = 0;
    while (primesTillN[i] <= n / 2)
    {
        if (n % primesTillN[i] == 0)
        {
            count++;
        }
        i++;
    }
    return count == 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, count = 0;
    cin >> n;
    vector<int> primesTillN = getPrimesTillN(n);
    for (int i = 6; i <= n; i++)
    {
        if (isAlmostPrime(i, primesTillN))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}