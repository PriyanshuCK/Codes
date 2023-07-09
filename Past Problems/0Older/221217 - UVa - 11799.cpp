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
        int max = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (temp >= max)
            {
                max = temp;
            }
        }
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}