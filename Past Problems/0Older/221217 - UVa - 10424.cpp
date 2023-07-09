// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getNum(string name)
{
    int num = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            num += name[i] - 64;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            num += name[i] - 96;
        }
    }
    return num;
}
int getDigit(int num)
{
    int sum = 0;
    while (num > 0 || sum > 9)
    {
        if (num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    string name1, name2;
    while (getline(cin, name1), getline(cin, name2))
    {
        printf("%.2f %%\n", 100 * min((double)getDigit(getNum(name1)), (double)getDigit(getNum(name2))) / max((double)getDigit(getNum(name1)), (double)getDigit(getNum(name2))));
    }

    return 0;
}