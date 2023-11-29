// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    char b;
    cin >> b;
    int points = 0;
    for (int i = 0; i < 4 * n; i++)
    {
        string s;
        cin >> s;
        if (s[1] == b)
        {
            if (s[0] == 'J')
            {
                points += 20;
            }
            else if (s[0] == '9')
            {
                points += 14;
            }
        }
        switch (s[0])
        {
        case 'A':
            points += 11;
            break;
        case 'K':
            points += 4;
            break;
        case 'Q':
            points += 3;
            break;
        case 'J':
            if (s[1] != b)
            {
                points += 2;
            }
            break;
        case 'T':
            points += 10;
            break;

        default:
            break;
        }
    }
    cout << points << endl;

    return 0;
}