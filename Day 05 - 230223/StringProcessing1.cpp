// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s, str;
    cin >> str;
    s = str;
    while (getline(cin, str) && str != ".......")
    {
        s = s + " " + str;
    }
    cout << s;

    return 0;
}