// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    for (int i = 1; cin >> n; i++)
    {
        if (n != 0)
        {
            int treat = 0, noTreat = 0, num;
            for (int j = 0; j < n; j++)
            {
                cin >> num;
                if (num != 0)
                {
                    noTreat++;
                }
                else
                {
                    treat++;
                }
            }
            cout << "Case " << i << ": " << noTreat - treat << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}