/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            grid.at(i).at(j) = line.at(j) - '0'; // 文字を整数に変換
        }
    }

    vector<vector<int>> ans_grid(n, vector<int>(n));
    ans_grid = grid; // 初期化

    // 上部
    for (int j = 0; j < n - 1; j++) {
        ans_grid.at(0).at(j + 1) = grid.at(0).at(j);
    }

    // 右部
    for (int i = 0; i < n - 1; i++) {
        ans_grid.at(i + 1).at(n - 1) = grid.at(i).at(n - 1);
    }

    // // 下部
    for (int j = n - 1; j > 0; j--) {
        ans_grid.at(n - 1).at(j - 1) = grid.at(n - 1).at(j);
    }

    // // 左部
    for (int i = n - 1; i > 0; i--) {
        ans_grid.at(i - 1).at(0) = grid.at(i).at(0);
    }

    // 出力
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans_grid.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
}
