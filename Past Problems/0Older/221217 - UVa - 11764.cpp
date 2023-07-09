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
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int prev, next, high = 0, low = 0;
        cin >> prev;
        for (int i = 1; i < n; i++)
        {
            cin >> next;
            if (next > prev)
            {
                high++;
            }
            else if (next < prev)
            {
                low++;
            }
            prev = next;
        }
        cout << "Case " << i << ": " << high << " " << low << endl;
    }
    return 0;
}