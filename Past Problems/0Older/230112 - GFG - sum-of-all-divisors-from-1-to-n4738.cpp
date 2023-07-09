// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long sumOfDivisors(int N)
{
    long long sum = 0;
    for (int i = N; i >= 1; i--)
    {
        sum += (N / i) * i;
    }
    return sum;
}
int main()
{
    int N;
    cin >> N;
    cout << sumOfDivisors(N) << endl;
    return 0;
}