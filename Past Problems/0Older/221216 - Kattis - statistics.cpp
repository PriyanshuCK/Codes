// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    for (int i = 1; cin >> n; i++)
    {
        int num;
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num < min)
            {
                min = num;
            }
            if (num > max)
            {
                max = num;
            }
        }
        cout << "Case " << i << ": " << min << " " << max << " " << max - min << endl;
    }

    return 0;
}