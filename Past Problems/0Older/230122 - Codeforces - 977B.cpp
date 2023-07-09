// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n, maxFreq = INT_MIN;
    string s;
    cin >> n;
    cin >> s;
    map<string, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        string twoGram = s.substr(i, 2);
        if (m.find(twoGram) == m.end())
        {
            m[twoGram] = 1;
        }
        else
        {
            m[twoGram]++;
        }
    }
    string maxTwoGram;
    for (auto x : m)
    {
        if (x.second > maxFreq)
        {
            maxTwoGram = x.first;
            maxFreq = x.second;
        }
    }
    cout << maxTwoGram << endl;

    return 0;
}