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
    set<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.insert(x);
    }
    int last = *(numbers.rbegin());
    int count = 1, flag = 0;
    for (int i = 1; i <= last; i++)
    {
        if (numbers.find(i) != numbers.end())
        {
            continue;
        }
        else
        {
            flag = 1;
            cout << i << endl;
        }
    }
    if (!flag)
    {
        cout << "good job" << endl;
    }

    return 0;
}