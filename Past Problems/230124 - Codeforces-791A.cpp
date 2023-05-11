// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int a, b;
    cin >> a >> b;
    float res = ((log(b) - log(a)) / (log(3) - log(2))) + 1;
    cout << floor(res) << endl;
    return 0;
}