// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num = ((((((n)*567) / 9) + 7492) * 235) / 47) - 498;
        num /= 10;
        cout << abs(num) % 10 << endl;
    }

    return 0;
}