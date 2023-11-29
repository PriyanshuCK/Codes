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
    int t;
    cin >> t;
    while (t--)
    {
        string blank;
        getline(cin, blank);
        string joP, jaP;
        cin >> jaP >> joP;
        string joU, jaU;
        int count = 0;
        while (true)
        {
            if (count >= 1000)
            {
                cout << "Keeps going and going ..." << endl;
                break;
            }
            if (joP.size() == 0)
            {
                joP = joU;
                joU.clear();
            }
            if (jaP.size() == 0)
            {
                jaP = jaU;
                jaU.clear();
            }
            if (joP.size() == 0 && joU.size() == 0)
            {
                cout << "Jane wins." << endl;
                break;
            }
            if (jaP.size() == 0 && jaU.size() == 0)
            {
                cout << "John wins." << endl;
                break;
            }
            if (joP[0] != jaP[0])
            {
                joU.push_back(joP[0]);
                jaU.push_back(jaP[0]);
                joP.erase(0, 1);
                jaP.erase(0, 1);
            }
            else
            {
                joU.push_back(joP[0]);
                jaU.push_back(jaP[0]);
                joP.erase(0, 1);
                jaP.erase(0, 1);
                int random = rand() / 141 % 2;
                string snapFirst;
                if (random)
                {
                    snapFirst = "John";
                }
                else
                {
                    snapFirst = "Jane";
                }
                if (snapFirst == "John")
                {
                    joU += jaU;
                    jaU.clear();
                    cout << "Snap! for John: ";
                    for (int i = joU.size() - 1; i >= 0; i--)
                    {
                        cout << joU[i];
                    }
                    cout << endl;
                }
                else
                {
                    jaU += joU;
                    joU.clear();
                    cout << "Snap! for Jane: ";
                    for (int i = jaU.size() - 1; i >= 0; i--)
                    {
                        cout << jaU[i];
                    }
                    cout << endl;
                }
            }
            count++;
        }
        if (t)
        {
            cout << endl;
        }
    }
    return 0;
}