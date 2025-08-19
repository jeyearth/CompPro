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

    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x.at(i) >> y.at(i);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int x_max = x.back();
    int x_min = x.front();
    int y_max = y.back();
    int y_min = y.front();

    int target_x = x_max - x_min;
    int target_y = y_max - y_min;

    int ans = (max(target_x, target_y) + 1) / 2;
    cout << ans << endl;
    return 0;
}
