// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v[1] - v[0] == v[2] - v[1])
    {
        cout << v[2] + v[1] - v[0] << endl;
    }
    else
    {
        cout << v[2] - v[1] + v[0] << endl;
    }
    return 0;
}