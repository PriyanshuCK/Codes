// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b), (a || b))
    {
        if (a + b == 13)
        {
            cout << "Never speak again." << endl;
        }
        else if (a == b)
        {
            cout << "Undecided." << endl;
        }
        else if (a < b)
        {
            cout << "Left beehind." << endl;
        }
        else
        {
            cout << "To the convention." << endl;
        }
    }
    return 0;
}