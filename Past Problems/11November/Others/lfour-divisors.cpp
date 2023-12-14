// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
map<int, int> sumDivisors()
{
    int n = 1e+5;
    vector<pair<int, int>> primes(n + 2, {0, 1});
    for (int i = 2; i <= n; i++)
    {
        if (primes[i].first <= 3)
        {
            for (int j = i; j <= n; j += i)
            {
                primes[j].first++;
                primes[j].second += i;
            }
        }
    }
    map<int, int> sumDivisorsMp;
    for (int i = 6; i <= n; i++)
    {
        if (primes[i].first == 3)
        {
            sumDivisorsMp[i] = primes[i].second;
        }
    }
    return sumDivisorsMp;
}
int sumFourDivisors(vector<int> &nums)
{
    map<int, int> sumDivisorsMp = sumDivisors();
    int count = 0;
    for (auto &&i : nums)
    {
        count += sumDivisorsMp[i];
    }

    return count;
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
    vector<int> nums;
    while (cin >> n)
    {
        nums.push_back(n);
    }
    cout << sumFourDivisors(nums) << endl;
    return 0;
}
// 1 2 4 7
// 1 2 4 8