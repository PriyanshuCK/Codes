// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int h, w;
    while (cin >> h >> w)
    {

        vector<vector<char>> picture;
        for (size_t i = 0; i < h; i++)
        {
            vector<char> row;
            for (size_t j = 0; j < w; j++)
            {
                char x;
                cin >> x;
                row.push_back(x);
            }
            picture.push_back(row);
        }
        float area = 0;
        int open = 0;
        for (size_t i = 0; i < h; i++)
        {
            for (size_t j = 0; j < w; j++)
            {
                if (picture[i][j] == '/' || picture[i][j] == '\\')
                {
                    area += 0.5;
                    open = !open;
                }
                else if (picture[i][j] == '.' && open)
                {
                    area += 1;
                }
            }
        }
        cout << area << endl;
    }

    return 0;
}