// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int sumOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int isDigitSumPalindrome(int N)
{
    int x = sumOfDigits(N);
    string num = to_string(x);
    string reversedNum = num;
    reverse(num.begin(), num.end());
    return num == reversedNum ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    cout << isDigitSumPalindrome(n) << endl;
    return 0;
}