// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getDigit(int num)
{
    int sum = 0;
    while (num != 0 || sum > 9)
    {
        if (num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int num;
    while (scanf("%d", &num), num != 0)
    {
        cout << getDigit(num) << endl;
    }
    return 0;
}