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
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "1 ";
            for (int j = 0; j < i / 2; j++)
            {
                cout << "0 1 ";
            }
        }
        else
        {
            for (int j = 0; j < i / 2 + 1; j++)
            {
                cout << "0 1 ";
            }
        }

        cout << endl;
    }

    return 0;
}