// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> nextPermutation(int N, vector<int> arr)
{
    int n = arr.size();
    if (arr[n - 1] > arr[n - 2])
    {
        swap(arr[n - 1], arr[n - 2]);
        return arr;
    }
    else
    {
        int maxi = n - 1, pivot = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                reverse(arr.begin(), arr.end());
                return arr;
            }
            if (arr[i] > arr[i - 1])
            {
                pivot = i - 1;
                break;
            }
        }
        for (int i = n - 1; i > pivot; i--)
        {
            if (arr[i] > arr[pivot])
            {
                maxi = i;
                break;
            }
        }
        swap(arr[maxi], arr[pivot]);
        reverse(arr.begin() + pivot + 1, arr.end());
        return arr;
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
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> result = nextPermutation(n, nums);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}