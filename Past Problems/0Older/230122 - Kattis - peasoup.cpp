// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    vector<string> favRest;
    while (n--)
    {
        int items;
        cin >> items;
        bool pancakes = false;
        bool peaSoup = false;
        string name;
        cin.ignore(1, '\n');
        getline(cin, name);
        vector<string> menu;
        for (int i = 0; i < items; i++)
        {
            string item;
            getline(cin, item);
            menu.push_back(item);
        }
        for (int i = 0; i < items; i++)
        {
            if (menu[i] == "pancakes")
            {
                pancakes = true;
            }
            else if (menu[i] == "pea soup")
            {
                peaSoup = true;
            }
        }
        if (pancakes && peaSoup)
        {
            favRest.push_back(name);
        }
    }
    if (favRest.size() == 0)
    {
        cout << "Anywhere is fine I guess" << endl;
    }
    else
    {
        cout << favRest[0] << endl;
    }

    return 0;
}