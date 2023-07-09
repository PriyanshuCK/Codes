// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int partition(int arr[], int low, int high)
{
    int pivot = low;
    while (high >= low)
    {
        if (arr[low] <= arr[pivot])
        {
            low++;
            continue;
        }
        if (arr[high] >= arr[pivot])
        {
            high--;
            continue;
        }
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    swap(arr[pivot], arr[high]);
    return high;
}
void quickSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int partitionInd = partition(arr, low, high);
    quickSort(arr, low, partitionInd - 1);
    quickSort(arr, partitionInd + 1, high);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}