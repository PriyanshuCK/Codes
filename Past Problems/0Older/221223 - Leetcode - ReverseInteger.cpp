// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int reverse(int x)
{
    string reverseInt;
    int temp = abs(x);
    while (temp != 0)
    {
        reverseInt.push_back((temp % 10) + '0');
        temp /= 10;
    }
    long rev = stol(reverseInt);
    if (x < 0)
    {
        rev *= -1;
    }
    if (rev < INT32_MIN || rev > INT32_MAX)
    {
        return 0;
    }
    else
    {
        return rev;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}