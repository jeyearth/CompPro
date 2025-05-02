#include <bits/stdc++.h>
using namespace std;

const int IGO = 9;

bool checkXY(int x, int y)
{
    return (0 <= x && x < IGO && 0 <= y && y < IGO);
}

void checkA(bool isFirst, bool isB, int count, int x, int y, vector<vector<bool>> &vec)
{
    if (!checkXY(x, y)) return;

    if (count == 0) {
        vec.at(y).at(x) = true; // ちょうどK回移動したらマーク
        return;
    }

    int tmpX, tmpY;
    if (!isB)
    {
        // Aの移動
        tmpX = x - 1; tmpY = y - 1;
        checkA(false, false, count - 1, tmpX, tmpY, vec);

        tmpX = x;     tmpY = y - 1;
        checkA(false, false, count - 1, tmpX, tmpY, vec);

        tmpX = x + 1; tmpY = y - 1;
        checkA(false, false, count - 1, tmpX, tmpY, vec);

        tmpX = x - 1; tmpY = y + 1;
        checkA(false, false, count - 1, tmpX, tmpY, vec);

        tmpX = x + 1; tmpY = y + 1;
        checkA(false, false, count - 1, tmpX, tmpY, vec);
    }

    if (!isFirst)
    {
        // Bの移動
        tmpX = x + 2; tmpY = y - 1;
        checkA(false, true, count - 1, tmpX, tmpY, vec);

        tmpX = x - 2; tmpY = y + 1;
        checkA(false, true, count - 1, tmpX, tmpY, vec);
    }
}

int main()
{
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<bool>> vec(IGO, vector<bool>(IGO, false));

    int x = W - 1;
    int y = H - 1;

    checkA(true, false, K, x, y, vec);

    int ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.at(0).size(); j++)
        {
            if (vec.at(i).at(j))
            {
                cout << "＃";
                ans++;
            }
            else
            {
                cout << "・";
            }
        }
        cout << endl;
    }

    cout << ans << endl;

    return 0;
}
