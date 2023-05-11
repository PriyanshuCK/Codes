// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string word;
    int count = 1;
    cin >> word;
    while (word != "#")
    {
        cout << "Case " << count << ":";
        if (word == "HELLO")
        {
            cout << " ENGLISH" << endl;
        }
        else if (word == "HOLA")
        {
            cout << " SPANISH" << endl;
        }
        else if (word == "HALLO")
        {
            cout << " GERMAN" << endl;
        }
        else if (word == "BONJOUR")
        {
            cout << " FRENCH" << endl;
        }
        else if (word == "CIAO")
        {
            cout << " ITALIAN" << endl;
        }
        else if (word == "ZDRAVSTVUJTE")
        {
            cout << " RUSSIAN" << endl;
        }
        else
        {
            cout << " UNKNOWN" << endl;
        }
        count++;
        cin >> word;
    }
    return 0;
}