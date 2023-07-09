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
    float qaly = 0;
    while (n--)
    {
        float a, b;
        cin >> a >> b;
        qaly += a * b;
    }
    printf("%.3f\n", qaly);
    return 0;
}