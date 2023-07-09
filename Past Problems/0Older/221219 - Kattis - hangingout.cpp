// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int l, x, count = 0;
    cin >> l >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        int p;
        cin >> s >> p;
        if (s == "enter")
        {
            l -= p;
            if (l < 0)
            {
                count++;
                l += p;
            }
        }
        else
        {
            l += p;
        }
    }
    cout << count << endl;

    return 0;
}