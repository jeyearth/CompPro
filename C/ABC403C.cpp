/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<bool>> v(N, vector<bool>(M, false));

    for (int i = 0; i < Q; i++)
    {
        int query;
        cin >> query;

        if (query == 1)
        {
            int x, y;
            cin >> x >> y;
            v.at(x - 1).at(y - 1) = true;
        }
        else if (query == 2)
        {
            int x;
            cin >> x;
            v.at(x - 1) = vector<bool>(M, true);
        }
        else if (query == 3)
        {
            int x, y;
            cin >> x >> y;
            if (v.at(x - 1).at(y - 1))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
