// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    for (int i = 0; i < s[3].length(); i += 4)
    {
        if (s[3][i] == '.' && s[3][i + 1] == '*')
        {
            v.push_back(1);
        }
        else if (s[3][i] == '.' && s[3][i + 1] == '.')
        {
            v.push_back(3);
        }
        else
        {
            v.push_back(2);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    return 0;
}