// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;
    vector<double> prices;
    for (int k = 1; k <= n; k++)
    {
        prices.push_back((double)p * (sin(a * k + b) + cos(c * k + d) + 2.0));
    }
    double maxim, min, next, prev = prices[0], decline = 0, difference = 0;
    maxim = prev, min = prev;
    for (int i = 1; i < n; i++)
    {
        next = prices[i];
        if (next < min)
        {
            min = next;
            difference = maxim - min;
            decline = max(decline, difference);
        }
        else if (next > maxim)
        {
            decline = max(decline, difference);
            maxim = next, min = next;
        }
    }
    printf("%.6f\n", decline);
    return 0;
}