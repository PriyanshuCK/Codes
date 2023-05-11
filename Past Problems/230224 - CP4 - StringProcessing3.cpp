// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    string s, str;
    while (getline(cin, str) && str != ".......")
    {
        s.append(str + " ");
    }
    int digits = 0, vowels = 0, consonants = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] <= 57 && s[i] >= 48)
        {
            digits++;
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    cout << s << " " << digits << " " << vowels << " " << consonants << endl;

    return 0;
}