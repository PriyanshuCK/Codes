// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int majorityElement(int a[], int size)
{
    int count = 0, el;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            count++;
            el = a[i];
        }
        else
        {
            if (el == a[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == el)
        {
            count++;
        }
    }
    return count > size / 2 ? el : -1;
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
    cout << majorityElement(a, n) << endl;
    return 0;
}