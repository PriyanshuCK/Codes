// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    while (cin >> n && n)
    {
        vector<string> v;
        for (int i = 0; i < n - 1; i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }
        string prev = "+x", point = "+x";
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == "NO")
            {
                continue;
            }
            if (prev == "+x" && v[i] != "No")
            {
                point = v[i];
                prev = v[i];
            }
            else if ((prev == "+y" && v[i] == "+y") || (prev == "+z" && v[i] == "+z") || (prev == "-y" && v[i] == "-y") || (prev == "-z" && v[i] == "-z"))
            {
                point = "-x";
                prev = "-x";
            }
            else if ((prev == "+y" && v[i] == "-y") || (prev == "+z" && v[i] == "-z") || (prev == "-y" && v[i] == "+y") || (prev == "-z" && v[i] == "+z"))
            {
                point = "+x";
                prev = "+x";
            }
            else if ((prev == "+y" && v[i] == "+z") || (prev == "+y" && v[i] == "-z") || (prev == "-x" && v[i] == "-y"))
            {
                point = "+y";
                prev = "+y";
            }
            else if ((prev == "-y" && v[i] == "+z") || (prev == "-y" && v[i] == "-z") || (prev == "-x" && v[i] == "+y"))
            {
                point = "-y";
                prev = "-y";
            }
            else if ((prev == "+z" && v[i] == "+y") || (prev == "+z" && v[i] == "-y") || (prev == "-x" && v[i] == "-z"))
            {
                point = "+z";
                prev = "+z";
            }
            else if ((prev == "-z" && v[i] == "+y") || (prev == "-z" && v[i] == "-y") || (prev == "-x" && v[i] == "+z"))
            {
                point = "-z";
                prev = "-z";
            }
        }
        cout << point << endl;
    }

    return 0;
}