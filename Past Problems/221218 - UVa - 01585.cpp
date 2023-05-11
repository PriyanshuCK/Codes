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
        string answers;
        cin >> answers;
        int prev = 0, score = 0;
        for (int i = 0; i < answers.length(); i++)
        {
            if (answers[i] == 'O')
            {
                score += 1 + prev;
                prev++;
            }
            else
            {
                prev = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}