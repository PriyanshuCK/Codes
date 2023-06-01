// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void pushZerosToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != 0 && arr[i] == 0)
        {
            j = i;
        }
        if (arr[i] != 0 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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
    pushZerosToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}