// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string sound;
    cin >> sound;
    if (sound.find("ss") != string::npos)
    {
        cout << "hiss" << endl;
    }
    else
    {
        cout << "no hiss" << endl;
    }

    return 0;
}