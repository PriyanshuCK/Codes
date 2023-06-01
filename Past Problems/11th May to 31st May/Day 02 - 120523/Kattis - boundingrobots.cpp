// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int w, l;
    while ((cin >> w >> l) && w && l)
    {
        int actPosx = 0, thiPosx = 0, actPosy = 0, thiPosy = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char direction;
            int z;
            cin >> direction >> z;
            switch (direction)
            {
            case 'u':
                thiPosy += z;
                break;
            case 'd':
                thiPosy -= z;
                break;

            case 'r':
                thiPosx += z;
                break;

            case 'l':
                thiPosx -= z;
                break;

            default:
                break;
            }
            switch (direction)
            {
            case 'u':
                if ((actPosy + z) <= (l - 1))
                {
                    actPosy += z;
                }
                else
                {
                    actPosy = l - 1;
                }
                break;
            case 'd':
                if ((actPosy - z) >= 0)
                {
                    actPosy -= z;
                }
                else
                {
                    actPosy = 0;
                }
                break;

            case 'r':
                if ((actPosx + z) <= (w - 1))
                {
                    actPosx += z;
                }
                else
                {
                    actPosx = w - 1;
                }
                break;

            case 'l':
                if ((actPosx - z) >= 0)
                {
                    actPosx -= z;
                }
                else
                {
                    actPosx = 0;
                }
                break;

            default:
                break;
            }
        }
        cout << "Robot thinks " << thiPosx << " " << thiPosy << endl;
        cout << "Actually at " << actPosx << " " << actPosy << endl;
    }
    return 0;
}