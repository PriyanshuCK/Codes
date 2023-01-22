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
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (n == 1)
        {
            cout << count << endl;
        }
        else
        {
            for (int i = 0; i < a.size() - 1; i++)
            {
                if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
                {
                    count++;
                    int temp = a[i] * a[i + 1];
                    a.erase(a.begin() + i, a.begin() + i + 2);
                    a.insert(a.begin() + i, temp);
                    i--;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}