// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> findMissingRepeatingNumbers(vector<int> arr)
{
    int p, q;
    int n = arr.size();
    long long sumO = 0, sumOfSqO = 0, sumT = 0, sumOfSqT = 0;
    for (int i = 0; i < n; i++)
    {
        sumO += arr[i];
        sumOfSqO += (long long)arr[i] * (long long)arr[i];
    }
    sumT = ((long long)n * (long long)(n + 1)) / 2;
    sumOfSqT = ((long long)n * (long long)(n + 1) * (long long)(2 * n + 1)) / 6;
    p = ((sumOfSqO - sumOfSqT + ((sumO - sumT) * (sumO - sumT))) / (2 * (sumO - sumT)));
    q = p - sumO + sumT;
    return {p, q};
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
    vector<int> result = findMissingRepeatingNumbers(a);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}