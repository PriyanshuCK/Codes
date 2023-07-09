// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void frequencyCount(vector<int> &arr, int N, int P)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > N || arr[i] <= 0)
        {
            continue;
        }
        int elementAtIndex = arr[i] - 1;
        if (arr[elementAtIndex] > 0)
        {
            arr[i] = arr[elementAtIndex];
            arr[elementAtIndex] = -1;
            i--;
        }
        else
        {
            arr[i] = 0;
            arr[elementAtIndex]--;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
        else
        {
            arr[i] = 0;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, p;
    cin >> n >> p;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    frequencyCount(arr, n, p);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}