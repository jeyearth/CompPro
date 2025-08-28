/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    // 高速な入出力
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> generation(2 * n + 2);

    generation[1] = 0;

    for (int i = 1; i <= n; ++i) {
        int parent_amoeba;
        cin >> parent_amoeba;

        generation[2 * i] = generation[parent_amoeba] + 1;
        generation[2 * i + 1] = generation[parent_amoeba] + 1;
    }

    for (int k = 1; k <= 2 * n + 1; ++k) {
        cout << generation[k] << endl;
    }

    return 0;
}