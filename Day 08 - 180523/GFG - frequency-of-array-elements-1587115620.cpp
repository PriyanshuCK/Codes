// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void frequencyCount(vector<int> &arr, int N, int P)
{
    map<int, int> freq;
    for (int i = 1; i <= N; i++)
    {
        freq.insert({i, 0});
    }
    for (int i = 0; i < N; i++)
    {
        if (freq.find(arr[i]) != freq.end())
        {
            freq[arr[i]]++;
        }
        else
        {
            freq[arr[i]] = 1;
        }
    }
    arr.erase(arr.begin(), arr.end());
    for (auto x : freq)
    {
        arr.push_back(x.second);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, P;
    vector<int> arr;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cin >> P;
    frequencyCount(arr, N, P);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}