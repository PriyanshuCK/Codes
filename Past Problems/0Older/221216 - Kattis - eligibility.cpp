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
        string name, study, dob;
        int courses;
        cin >> name >> study >> dob >> courses;
        cout << name;
        if (study >= "2010/01/01" || dob >= "1991/01/01")
        {
            cout << " eligible" << endl;
        }
        else if (courses >= 41)
        {
            cout << " ineligible" << endl;
        }
        else
        {
            cout << " coach petitions" << endl;
        }
    }
    return 0;
}