/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

bool checkDelete(int x, int y, vector<vector<int>> &v, int W, int H)
{
    int target = v.at(y).at(x);
    if (target == 0)
        return false;

    // 1チェック
    if (0 < y && v.at(y - 1).at(x) != target)
    {
        return false;
    }

    // 2チェック
    if (0 < x && v.at(y).at(x - 1) != target)
    {
        return false;
    }

    // 3チェック
    if (x < W - 1 && v.at(y).at(x + 1) != target)
    {
        return false;
    }

    // 4チェック
    if (y < H - 1 && v.at(y + 1).at(x) != target)
    {
        return false;
    }
    return true;
}

void deleteTarget(int x, int y, vector<vector<int>> &v, int W, int H)
{
    // cout << "x: " << x << "  y: " << y;

    // 0を削除
    v.at(y).at(x) = 0;

    // 1を削除
    if (0 < y)
    {
        v.at(y - 1).at(x) = 0;
    }

    // 2を削除
    if (0 < x)
    {
        v.at(y).at(x - 1) = 0;
    }

    // 3を削除
    if (x < W - 1)
    {
        v.at(y).at(x + 1) = 0;
    }

    // 4を削除
    if (y < H - 1)
    {
        v.at(y + 1).at(x) = 0;
    }
}

int main()
{
    int W = 5;
    int H;
    cin >> H;

    vector<vector<int>> v(H, vector<int>(W));

    for (int i = 0; i < H; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < W; j++)
        {
            if (s.at(j) == '.')
            {
                v.at(i).at(j) = 0;
            }
            else
            {
                int a = s.at(j) - '0';
                v.at(i).at(j) = a;
            }
        }
    }

    while (true)
    {
        // 消す対象の基準を入れるキュー pair(x, y)
        queue<pair<int, int>> deleteT;
        for (int i = 0; i < H; i++)
        {
            // 消す対象の基準を探す
            for (int j = 0; j < W; j++)
            {
                if (checkDelete(j, i, v, W, H))
                {
                    deleteT.push(make_pair(j, i));
                }
            }
        }

        if (deleteT.empty())
        {
            break;
        }

        while (!deleteT.empty())
        {
            pair<int, int> p = deleteT.front();
            // cout << "x: " << p.first << "  y: " << p.second;
            // cout << endl;
            deleteTarget(p.first, p.second, v, W, H);
            deleteT.pop();
        }

        // 落とす
        for (int i = 0; i < W; i++)
        {
            int index = H - 1;
            for (int j = index; j >= 0; j--)
            {
                if (v.at(j).at(i) == 0)
                {
                    continue;
                }
                else
                {
                    swap(v.at(index).at(i), v.at(j).at(i));
                    index--;
                }
            }
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (v.at(i).at(j) == 0)
            {
                cout << '.';
            }
            else
            {
                cout << v.at(i).at(j);
            }
        }
        cout << endl;
    }

    return 0;
}
