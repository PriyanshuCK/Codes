// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(vector<int> &a, int left, int mid, int right, int &count)
{
    vector<int> temp;
    int l = left, r = mid + 1;
    while (l <= mid && r <= right)
    {
        if (a[r] < a[l])
        {
            temp.push_back(a[r]);
            count += mid - l + 1;
            r++;
        }
        else
        {
            temp.push_back(a[l]);
            l++;
        }
    }
    while (l <= mid)
    {
        temp.push_back(a[l]);
        l++;
    }
    while (r <= right)
    {
        temp.push_back(a[r]);
        r++;
    }
    for (int i = left; i <= right; i++)
    {
        a[i] = temp[i - left];
    }
}
void getInversions(vector<int> &a, int left, int right, int &count)
{
    if (left == right)
    {
        return;
    }
    else
    {
        int mid = (left + right) / 2;
        getInversions(a, left, mid, count);
        getInversions(a, mid + 1, right, count);
        merge(a, left, mid, right, count);
    }
}
int numberOfInversions(vector<int> &a, int n)
{
    int left = 0, right = n - 1, count = 0;
    getInversions(a, left, right, count);
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << numberOfInversions(a, n) << endl;
    return 0;
}