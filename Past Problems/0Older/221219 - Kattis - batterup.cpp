// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, sum = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b != -1)
        {
            sum += b;
            count++;
        }
    }
    printf("%.3f\n", (double)sum / count);
    return 0;
}