// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> mergedVector;
    int start = intervals[0][0], end = intervals[0][1];
    mergedVector.push_back({start, end});
    for (int i = 1; i < intervals.size(); i++)
    {
        start = intervals[i][0];
        end = intervals[i][1];
        if (start <= mergedVector.back()[1])
        {
            mergedVector.back()[1] = max(mergedVector.back()[1], end);
        }
        else
        {
            mergedVector.push_back({start, end});
        }
    }
    return mergedVector;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        intervals.push_back({start, end});
    }
    vector<vector<int>> result = merge(intervals);
    for (auto &&i : result)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}