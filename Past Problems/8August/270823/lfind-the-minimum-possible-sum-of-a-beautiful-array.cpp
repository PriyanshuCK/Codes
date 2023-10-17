// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
long long minimumPossibleSum(int n, int target)
{
    long long sum = 0;
    unordered_set<int> notInc;
    int el = 1, count = 0;
    while (count < n)
    {
        if (notInc.find(el) == notInc.end())
        {
            sum += el;
            count++;
            if (target > el)
            {
                notInc.insert(target - el);
            }
        }
        el++;
    }
    return sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, target;
    cin >> n >> target;
    cout << minimumPossibleSum(n, target) << endl;
    return 0;
}