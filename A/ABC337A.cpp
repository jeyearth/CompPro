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
    int takahashi_score = 0;
    int aoki_score = 0;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        takahashi_score += x;
        aoki_score += y;
    }

    if (takahashi_score > aoki_score) {
        cout << "Takahashi" << endl;
    } else if (takahashi_score < aoki_score) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}
