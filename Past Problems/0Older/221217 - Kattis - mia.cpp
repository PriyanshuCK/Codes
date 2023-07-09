// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int a, b, c, d;
    vector<int> special = {66, 55, 44, 33, 22, 11};
    while (scanf("%d %d %d %d", &a, &b, &c, &d), (a || b || c || d))
    {
        int p1 = min(b, a) + 10 * max(a, b), p2 = min(d, c) + 10 * max(c, d);
        auto p1Pos = find(special.begin(), special.end(), p1);
        auto p2Pos = find(special.begin(), special.end(), p2);
        if (p1 == 21 || p2 == 21)
        {
            if (p1 != 21)
            {
                cout << "Player 2 wins." << endl;
            }
            else if (p2 != 21)
            {
                cout << "Player 1 wins." << endl;
            }
            else
            {
                cout << "Tie." << endl;
            }
        }
        else
        {
            if (p1Pos != special.end() && p2Pos != special.end())
            {
                if (p1Pos < p2Pos)
                {
                    cout << "Player 1 wins." << endl;
                }
                else if (p1Pos > p2Pos)
                {
                    cout << "Player 2 wins." << endl;
                }
                else
                {
                    cout << "Tie." << endl;
                }
            }
            else if (p1Pos != special.end())
            {
                cout << "Player 1 wins." << endl;
            }
            else if (p2Pos != special.end())
            {
                cout << "Player 2 wins." << endl;
            }
            else
            {
                if (p1 > p2)
                {
                    cout << "Player 1 wins." << endl;
                }
                else if (p2 > p1)
                {
                    cout << "Player 2 wins." << endl;
                }
                else
                {
                    cout << "Tie." << endl;
                }
            }
        }
    }

    return 0;
}

// Simpler implementation by github.com/mpfeifer1

int getScore(int hi, int lo)
{
    if (lo > hi)
    {
        swap(lo, hi);
    }
    if (hi == 2 && lo == 1)
    {
        return 100000;
    }
    if (hi == lo)
    {
        return hi * 100;
    }
    return hi * 10 + lo;
}