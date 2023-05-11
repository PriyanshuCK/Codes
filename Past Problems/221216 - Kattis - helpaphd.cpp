// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string marks;
        cin >> marks;
        if (marks == "P=NP")
        {
            cout << "skipped" << endl;
        }
        else
        {
            cout << stoi(marks) + stoi(marks.substr(marks.find("+") + 1)) << endl;
        }
    }
    return 0;
}