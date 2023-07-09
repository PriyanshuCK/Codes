// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m && n == m + 1)
    {
        cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
    }
    else if (n > m && n != m + 1)
    {
        cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << endl;
    }
    else if (m > n && m == n + 1)
    {
        cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
    }
    else
    {
        cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << endl;
    }

    return 0;
}