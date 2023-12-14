// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> getColors(int n)
{
    int count = 1;
    vector<int> colors(n + 2, 1);
    for (int i = 2; i <= n / 2; i++)
    {
        if (colors[i] == 1)
        {
            for (int j = (long long)i * 2; j <= n; j += i)
            {
                colors[j] = max(colors[j], colors[i] + 1);
                count = max(count, colors[j]);
            }
        }
    }
    colors.push_back(count);
    return colors;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> colors = getColors(n + 1);
    cout << colors[colors.size() - 1] << endl;
    colors.pop_back();
    for (int i = 2; i < n + 2; i++)
    {
        cout << colors[i] << " ";
    }
    cout << endl;
    return 0;
}