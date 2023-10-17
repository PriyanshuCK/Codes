// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int numOfPainters(vector<int> &boards, int n)
{
    int numOfPainter = 1, currArea = 0;
    for (size_t i = 0; i < boards.size(); i++)
    {
        if (currArea + boards[i] <= n)
        {
            currArea += boards[i];
        }
        else
        {
            numOfPainter++;
            currArea = boards[i];
        }
    }
    return numOfPainter;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int left = *max_element(boards.begin(), boards.end()), right = accumulate(boards.begin(), boards.end(), 0);
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (numOfPainters(boards, mid) <= k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int k, n;
    cin >> k;
    vector<int> boards;
    while (cin >> n)
    {
        boards.push_back(n);
    }
    cout << findLargestMinDistance(boards, k) << endl;
    return 0;
}