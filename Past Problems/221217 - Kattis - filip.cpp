// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int reverseNum(int n)
{
    int temp = n;
    vector<int> digits;
    while (temp)
    {
        int remainder = temp % 10;
        temp /= 10;
        digits.push_back(remainder);
    }
    return 100 * digits[0] + 10 * digits[1] + digits[2];
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(reverseNum(a), reverseNum(b));
    return 0;
}