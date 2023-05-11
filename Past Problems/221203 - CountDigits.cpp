// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int evenlyDivides(int n)
{
    int count = 0, temp = n;
    while (temp)
    {
        int digit = temp % 10;
        if (n % digit == 0)
        {
            count++;
        }
        temp /= 10;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << evenlyDivides(n) << endl;
    return 0;
}