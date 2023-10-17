// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int count = 0;
    count += m[4];
    int minOF13 = min(m[1], m[3]);
    count += minOF13;
    m[1] -= minOF13;
    m[3] -= minOF13;
    count += m[3];
    count += m[2] / 2;
    m[2] % 2 == 0 ? m[2] = 0 : m[2] = 1;
    if (m[2] == 1)
    {
        count++;
        m[1] -= 2;
    }
    m[1] > 0 ? count += int(ceil(m[1] / 4.0)) : count += 0;
    cout << count << endl;
    return 0;
}