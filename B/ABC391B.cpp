/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

bool checkFunc(int y, int x, vector<vector<bool>> S, vector<vector<bool>> T) {

    for (int i = 0; i < T.size(); i++)
    {
        for (int j = 0; j < T.size(); j++)
        {
            bool small = S.at(y + i).at(x + j);
            bool tall = T.at(i).at(j);
            if (small != tall) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> S(N, vector<bool>(N, false));
    vector<vector<bool>> T(M, vector<bool>(M, false));

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++)
        {
            if (str.at(j) == '#') {
                S.at(i).at(j) = true;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            if (str.at(j) == '#') {
                T.at(i).at(j) = true;
            }
        }
    }

    for (int i = 0; i < N - M + 1; i++)
    {
        for (int j = 0; j < N - M + 1; j++)
        {
            if (checkFunc(i, j, S, T)) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}
