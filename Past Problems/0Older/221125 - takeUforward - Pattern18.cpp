// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}