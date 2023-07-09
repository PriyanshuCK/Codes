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
    int t, c = 1;
    cin >> t;
    while (c != t + 1)
    {
        int n, sumM = 0, sumJ = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sumM += (ceil(x / 30) + 1) * 10;
            sumJ += (ceil(x / 60) + 1) * 15;
        }
        cout << "Case " << c << ": ";
        if (sumM < sumJ)
        {
            cout << "Mile " << sumM << endl;
        }
        else if (sumJ < sumM)
        {
            cout << "Juice " << sumJ << endl;
        }
        else
        {
            cout << "Mile Juice " << sumJ << endl;
        }
        c++;
    }
    return 0;
}