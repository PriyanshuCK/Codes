// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int minJumps(int arr[], int n)
{
    int prevJump = 0, maxJump = arr[0], jumpMax = maxJump, nextMaxJump = maxJump, count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > jumpMax)
        {
            jumpMax = i;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minJumps(arr, n);
    return 0;
}