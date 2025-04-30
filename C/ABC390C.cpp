/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int>> v(H, vector<int>(W));

    char BLACK = '#';
    char WHITE = '.';
    char BLANK = '?';

    int xMin = W;
    int xMax = -1;
    int yMin = H;
    int yMax = -1;

    for (int i = 0; i < H; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < W; j++)
        {
            char c = s.at(j);

            if (c == BLACK) {
                
                if (j < xMin) {
                    xMin = j;
                }

                if (xMax < j) {
                    xMax = j;
                }

                if (i < yMin) {
                    yMin = i;
                }

                if (yMax < i) {
                    yMax = i;
                }
            }

            v.at(i).at(j) = c;
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            char c = v.at(i).at(j);

            if (c == WHITE) {
                if (yMin <= i && i <= yMax) {
                    if (xMin <= j && j <= xMax) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
