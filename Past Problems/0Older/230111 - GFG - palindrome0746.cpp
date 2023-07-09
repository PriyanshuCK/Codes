// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string is_palindrome(int n)
{
    string num = to_string(n);
    string reversedNum = num;
    reverse(num.begin(), num.end());
    return num == reversedNum ? "Yes" : "No";
}

int main()
{
    int n;
    cin >> n;
    cout << is_palindrome(n) << endl;
    return 0;
}