// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void printNos(int N, int i = 1)
{
    if (i > N)
    {
        return;
    }
    cout << i << " ";
    return printNos(N, i + 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    printNos(n);
    return 0;
}