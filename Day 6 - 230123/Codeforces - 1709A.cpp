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
        int key1, key2, key3;
        cin >> key1;
        vector<int> doors;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            doors.push_back(x);
        }
        key2 = doors[key1 - 1];
        if (key2 != 0)
        {
            key3 = doors[key2 - 1];
        }
        if (key2 == 0 || key3 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}