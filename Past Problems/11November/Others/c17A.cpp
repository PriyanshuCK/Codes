// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> getPrimes()
{
    int n = 1e+3, nsqrt = sqrt(n);
    vector<bool> primeFlags(n + 2, true);
    primeFlags[0] = primeFlags[1] = false;
    for (int i = 2; i <= nsqrt; i++)
    {
        if (primeFlags[i])
        {
            for (int j = (long long)i * i; j <= n; j += i)
            {
                primeFlags[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (primeFlags[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> primes = getPrimes();
    int size = primes.size(), count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int x = primes[i] + primes[i + 1] + 1;
        if (x <= n)
        {
            if (binary_search(primes.begin(), primes.end(), x))
            {
                count++;
            }
        }
        else
        {
            break;
        }
    }
    if (k <= count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}