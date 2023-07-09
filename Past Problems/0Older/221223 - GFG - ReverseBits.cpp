// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long reversedBits(long long X)
{
    vector<int> binary(32, 0);
    for (int i = 0; i < 32 && X != 0; i++)
    {
        binary[31 - i] = X % 2;
        X /= 2;
    }
    long long decimal = 0;
    for (int i = 0; i < 32; i++)
    {
        decimal += pow(2, i) * binary[i];
    }
    return decimal;
}
int main()
{
    long long n;
    cin >> n;
    cout << reversedBits(n) << endl;
    return 0;
}