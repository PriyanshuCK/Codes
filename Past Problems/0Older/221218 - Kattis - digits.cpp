// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getNum(int n)
{
    int count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    string str;
    while (getline(cin, str), str != "END")
    {
        int n, prev, next;
        if (str.length() == 1 && stoi(str) == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            n = str.length();
            vector<int> v;
            v.push_back(n);
            prev = n;
            next = getNum(n);
            while (next != prev)
            {
                v.push_back(next);
                prev = next;
                next = getNum(prev);
            }
            if (next == prev)
            {
                cout << v.size() + 1 << endl;
            }
        }
    }
    return 0;
}