// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    cout << (((k * w * (w + 1)) / 2 - n) > 0 ? ((k * w * (w + 1)) / 2 - n) : 0) << endl;
    return 0;
}