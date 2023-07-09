// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, next, min = INT_MAX, count = 0;
    cin >> n;
    cin >> min;
    for (int i = 1; i < n; i++)
    {
        cin >> next;
        if (next < min)
        {
            min = next;
            count = i;
        }
    }
    cout << count << endl;

    return 0;
}