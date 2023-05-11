// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void fibonacci(int prevFirst, int prevSecond, int n, int count)
{
    int num = prevFirst + prevSecond;
    if (prevFirst == 0)
    {
        cout << 0 << " " << 1 << " ";
    }
    if (count == n)
    {
        return;
    }
    cout << num << " ";
    count++;
    prevFirst = prevSecond;
    prevSecond = num;
    return fibonacci(prevFirst, prevSecond, n, count);
}
int main()
{
    int n; // n>=2
    cin >> n;
    fibonacci(0, 1, n, 2);
    return 0;
}