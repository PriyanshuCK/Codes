// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getFloor(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int floor = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            floor = mid;
            left = mid + 1;
        }
    }
    return floor;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int floorInd = getFloor(arr, n, x);
    int floor = floorInd == -1 ? -1 : arr[floorInd];
    int *ceilItr = lower_bound(arr, arr + n, x);
    int ceil = ceilItr - arr == n ? -1 : arr[ceilItr - arr];
    return {floor, ceil};
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> result = getFloorAndCeil(arr, n, x);
    cout << result.first << " " << result.second << endl;
    return 0;
}