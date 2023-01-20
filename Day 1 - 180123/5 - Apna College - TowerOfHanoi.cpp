// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void towerOfHanoi(string &s, string &h, string &d, int n)
{
    string temp = to_string(n);
    if (n == 1)
    {
        s.pop_back();
        d.append(temp);
        cout << s << " " << h << " " << d << endl;
        return;
    }
    towerOfHanoi(s, d, h, n - 1);
    s.pop_back();
    d.append(temp);
    towerOfHanoi(h, s, d, n - 1);
    return;
}
int main()
{
    int n;
    cin >> n;
    string s = "", h = "", d = "";
    cin >> s;
    towerOfHanoi(s, h, d, n);
    return 0;
}