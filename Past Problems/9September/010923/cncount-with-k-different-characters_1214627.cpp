// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int countSubStrings(string s, int k)
{
    int count = 0;
    for (int i = 0; i < (int)(s.size()); i++)
    {
        if (i > (int)(s.size()) - k)
        {
            break;
        }

        set<char> subS;
        int j = i;
        while ((int)subS.size() <= k && j < (int)(s.size()))
        {
            subS.insert(s[j]);
            if ((int)subS.size() == k)
            {
                count++;
            }
            j++;
        }
    }
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    int k;
    cin >> s >> k;
    cout << countSubStrings(s, k) << endl;
    return 0;
}