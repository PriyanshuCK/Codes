// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> nextPermutation(int N, vector<int> arr)
{
    for (int i = N - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            for (int j = N - 1; j >= i; j--)
            {
                if (arr[i - 1] < arr[j])
                {
                    swap(arr[i - 1], arr[j]);
                    break;
                }
            }
            sort(arr.begin() + i, arr.end());
            return arr;
        }
    }
    reverse(arr.begin(), arr.end());
    return arr;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    arr = nextPermutation(n, arr);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}