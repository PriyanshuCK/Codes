// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s, a;
    cin >> s;
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        if (i <= length - 3)
        {
            string three = s.substr(i, 3);
            sort(three.begin(), three.end());
            if (three == "BLR")
            {
                a.push_back('C');
                i += 2;
            }
            else
            {
                switch (s[i])
                {
                case 'B':
                    a.push_back('K');
                    break;
                case 'L':
                    a.push_back('H');
                    break;
                case 'R':
                    a.push_back('S');
                    break;
                default:
                    break;
                }
            }
        }
        else
        {
            switch (s[i])
            {
            case 'B':
                a.push_back('K');
                break;
            case 'L':
                a.push_back('H');
                break;
            case 'R':
                a.push_back('S');
                break;
            default:
                break;
            }
        }
    }
    for (int i = 0; i < a.length(); i++)
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}