// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int time, total = 0, right = 0;
    vector<pair<int, int>> score(26, {0, 0});
    char problem;
    string verdict;
    while (cin >> time, time != -1)
    {
        cin >> problem >> verdict;
        if (verdict == "right")
        {
            score[problem - 65].second = time;
            right++;
        }
        else
        {
            score[problem - 65].first += 20;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (score[i].second != 0)
        {
            total += score[i].first + score[i].second;
        }
    }
    cout << right << " " << total << endl;
    return 0;
}