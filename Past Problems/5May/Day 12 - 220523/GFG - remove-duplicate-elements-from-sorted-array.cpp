// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int remove_duplicate(int a[], int n)
{
    vector<int> newArr;
    newArr.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (*newArr.rbegin() != a[i])
        {
            newArr.push_back(a[i]);
        }
    }
    int count = newArr.size();
    for (int i = 0; i < count; i++)
    {
        a[i] = newArr[i];
    }

    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << remove_duplicate(a, n) << endl;
    for (int i = 0; i < remove_duplicate(a, n); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}