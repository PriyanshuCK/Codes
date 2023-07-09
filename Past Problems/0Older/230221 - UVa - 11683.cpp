// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, c;
    while (cin >> a >> c && (a || c))
    {
        vector<int> x;
        for (int i = 0; i < c; i++)
        {
            int y;
            cin >> y;
            x.push_back(y);
        }
        int count = a - x[0];
        for (int i = 1; i < c; i++)
        {
            if (x[i] < x[i - 1])
            {
                count += x[i - 1] - x[i];
            }
        }
        cout << count << endl;
    }

    return 0;
}