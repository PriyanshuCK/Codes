// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(long long a[], long long left, long long mid, long long right, long long &count)
{
    for (long long i = mid + 1; i <= right; i++)
    {
        for (long long j = left; j <= mid; j++)
        {
            if (a[j] > a[i])
            {
                count += mid - j + 1;
                break;
            }
        }
    }
    vector<long long> temp;
    long long l = left, r = mid + 1;
    while (l <= mid && r <= right)
    {
        if (a[r] <= a[l])
        {
            temp.push_back(a[r]);
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
    for (long long i = left; i <= right; i++)
    {
        a[i] = temp[i - left];
    }
}
void getInversions(long long a[], long long left, long long right, long long &count)
{
    if (left == right)
    {
        return;
    }
    else
    {
        long long mid = (left + right) / 2;
        getInversions(a, left, mid, count);
        getInversions(a, mid + 1, right, count);
        merge(a, left, mid, right, count);
    }
}
long long int inversionCount(long long arr[], long long N)
{
    long long left = 0, right = N - 1, count = 0;
    getInversions(arr, left, right, count);
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long N;
    cin >> N;
    long long arr[N];
    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << inversionCount(arr, N) << endl;

    return 0;
}