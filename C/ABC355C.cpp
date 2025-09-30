/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> horizontal(n, n);
    vector<int> vertical(n, n);
    int diagonal1 = n; // 右下がり
    int diagonal2 = n; // 左下がり

    int ans = -1;
    for (int i = 0; i < t; i++) {
        if (t < n) {
            break;
        }
        int a;
        cin >> a;
        int h = (a - 1) / n;
        int v = (a - 1) % n;
        horizontal.at(h)--;
        vertical.at(v)--;
        if (h == v) {
            diagonal1--;
        }
        if (h + v == n - 1) {
            diagonal2--;
        }

        if (horizontal.at(h) == 0 || vertical.at(v) == 0 || diagonal1 == 0 || diagonal2 == 0) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
