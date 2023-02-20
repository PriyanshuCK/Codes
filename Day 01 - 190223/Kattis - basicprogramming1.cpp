// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    switch (t)
    {
    case 1:
        cout << 7 << endl;
        break;
    case 2:
    {
        if (a[0] > a[1])
        {
            cout << "Bigger" << endl;
        }
        else if (a[0] == a[1])
        {
            cout << "Equal" << endl;
        }
        else
        {
            cout << "Smaller" << endl;
        }
        break;
    }
    case 3:
    {
        sort(a.begin(), a.begin() + 3);
        cout << a[1] << endl;
        break;
    }
    case 4:
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
        break;
    }
    case 5:
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
        break;
    }
    case 6:
    {
        string s(n, ' ');
        for (int i = 0; i < n; i++)
        {
            s[i] = 'a' + (a[i] % 26);
        }
        cout << s << endl;
        break;
    }
    case 7:
    {
        vector<bool> visited(n, false);
        int i = 0;
        while (true)
        {
            if (i < 0 || i >= n)
            {
                cout << "Out" << endl;
                break;
            }
            if (i == n - 1)
            {
                cout << "Done" << endl;
                break;
            }
            if (visited[i])
            {
                cout << "Cyclic" << endl;
                break;
            }
            visited[i] = true;
            i = a[i];
        }
        break;
    }
    }
    return 0;
}
