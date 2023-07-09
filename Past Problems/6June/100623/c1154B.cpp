// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int result(set<int> s)
{
    int sum = 0;
    for (auto &&i : s)
    {
        sum += i;
    }
    if ((s.size() > 2 && sum % s.size() != 0) || s.size() > 3)
    {
        return -1;
    }
    if (s.size() == 2 && sum % s.size() != 0)
    {
        return max(*s.begin(), *s.rbegin()) - min(*s.begin(), *s.rbegin());
    }

    int num = sum / s.size(), d = 0;
    if (num > *s.begin())
    {
        d = num - *s.begin();
    }
    else
    {
        d = *s.begin() - num;
    }
    for (auto &&i : s)
    {
        if (max(num, i) - min(num, i) != d && max(num, i) - min(num, i) != 0)
        {
            return -1;
        }
    }
    return d;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << result(s) << endl;
    return 0;
}