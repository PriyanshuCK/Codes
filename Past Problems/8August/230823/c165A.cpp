// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct hashFunction
{
    size_t operator()(const pair<int, int> &x) const
    {
        return x.first ^ x.second;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN;
    cin >> n;
    unordered_set<pair<int, int>, hashFunction> s;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        s.insert({x, y});
        minX = min(minX, x);
        maxX = max(maxX, x);
        minY = min(minY, y);
        maxY = max(maxY, y);
    }
    int count = 0;
    for (auto &&x : s)
    {
        int count1 = 0;
        for (int i = x.first + 1; i <= maxX; i++)
        {
            if (s.find({i, x.second}) != s.end())
            {
                count1++;
                break;
            }
        }
        for (int i = x.first - 1; i >= minX; i--)
        {
            if (s.find({i, x.second}) != s.end())
            {
                count1++;
                break;
            }
        }
        for (int i = x.second + 1; i <= maxY; i++)
        {
            if (s.find({x.first, i}) != s.end())
            {
                count1++;
                break;
            }
        }
        for (int i = x.second - 1; i >= minY; i--)
        {
            if (s.find({x.first, i}) != s.end())
            {
                count1++;
                break;
            }
        }
        if (count1 == 4)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}