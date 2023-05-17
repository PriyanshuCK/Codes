// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<long long> factorialNumbers(long long N, vector<long long> factNums = {}, int i = 1)
{
    if (!(factNums.empty()) && (N < *factNums.rbegin()))
    {
        factNums.pop_back();
        return factNums;
    }
    long long factorial = 1;
    for (int j = 1; j <= i; j++)
    {
        factorial *= j;
    }
    factNums.push_back(factorial);
    return factorialNumbers(N, factNums, i + 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long N;
    cin >> N;
    vector<long long> factorialNum = factorialNumbers(N);
    for (auto x : factorialNum)
    {
        cout << x << " ";
    }

    return 0;
}