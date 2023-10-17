// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int floorSqrt(int n)
{
    int left = 1, right = n, floorSqrt = 0;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        if (mid * mid == n)
        {
            floorSqrt = mid;
            break;
        }
        else if (mid * mid < n)
        {
            left = mid + 1;
            floorSqrt = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return floorSqrt;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << floorSqrt(n) << endl;
    return 0;
}