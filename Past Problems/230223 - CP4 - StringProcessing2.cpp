// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s, str;
    while (getline(cin, str) && str != ".......")
    {
        s.append(str + " ");
    }
    vector<int> v;
    string p;
    cin >> p;
    size_t pos = 0;
    int flag = 0;
    for (size_t i = 0; (i < s.length() && pos < s.length()); i++)
    {
        size_t found = s.find(p, pos);
        if (found != string::npos)
        {
            flag = 1;
            v.push_back(found);
            pos = found + 1;
        }
    }
    if (flag == 1)
    {
        for (auto &&x : v)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}