/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W, 'U'));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> grid.at(i).at(j);
        }
    }

    int x, y;
    x = 0;
    y = 0;
    set<string> pre;
    while (true)
    {
        char g = grid.at(y).at(x);
        if (g == 'U' && y != 0)
        {
            y--;
        }
        else if (g == 'D' && y != H - 1)
        {
            y++;
        }
        else if (g == 'L' && x != 0)
        {
            x--;
        }
        else if (g == 'R' && x != W - 1)
        {
            x++;
        }
        else
        {
            cout << y + 1 << " " << x + 1 << endl;
            break;
        }
        string keyStr = to_string(x) + "," + to_string(y);
        if (!pre.empty() && pre.count(keyStr))
        {
            cout << -1 << endl;
            break;
        }
        else
        {
            pre.insert(keyStr);
        }
    }
    return 0;
}
