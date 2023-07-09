// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, position = 0;
        cin >> n;
        vector<string> instructions;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            if (str == "LEFT" || str == "RIGHT")
            {
                instructions.push_back(str);
            }
            else
            {
                int pos;
                cin >> str >> pos;
                instructions.push_back(instructions[pos - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (instructions[i] == "LEFT")
            {
                position--;
            }
            else
            {
                position++;
            }
        }
        cout << position << endl;
    }
    return 0;
}
