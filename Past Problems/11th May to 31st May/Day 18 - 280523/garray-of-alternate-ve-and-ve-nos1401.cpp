// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void rearrange(int arr[], int n)
{
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    int posN = pos.size(), negN = neg.size(), last = 0;
    for (int i = 0; i < n; i++)
    {
        if (posN > 0 && negN > 0)
        {
            if (i % 2 == 0)
            {
                arr[i] = pos[i / 2];
                posN--;
            }
            else
            {
                arr[i] = neg[i / 2];
                negN--;
            }
            last = i;
        }
    }
    if (posN > 0)
    {
        for (int i = 0; i < n - last - 1; i++)
        {
            arr[i + last + 1] = pos[(last / 2) + 1 + i];
        }
    }
    if (negN > 0)
    {
        for (int i = 0; i < n - last - 1; i++)
        {
            arr[i + last + 1] = neg[(last / 2) + i];
        }
    }
    if (pos.size() == 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = neg[i];
        }
    }
    if (neg.size() == 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = pos[i];
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
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}