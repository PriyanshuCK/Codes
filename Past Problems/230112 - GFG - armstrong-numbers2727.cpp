// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string armstrongNumber(int n)
{
    int sum = 0, num = n;
    while (n)
    {
        int temp = n % 10;
        sum += round((int)(pow(temp, 3) + 0.1));
        n /= 10;
    }
    if (sum == num)
    {
        return "Yes";
    }
    return "No";
}
int main()
{
    int n;
    cin >> n;
    cout << armstrongNumber(n) << endl;
    return 0;
}

/*
    New Learnings
    - pow malfunctioning for int arguments
    - setprecision() and fixed()
*/