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
    string longString;
    getline(cin, longString);
    cout << longString.length() << endl;
    return 0;
}