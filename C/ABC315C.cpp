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

    vector<pair<long long, long long>> points(n);

    for (int i = 0; i < n; ++i) {
        cin >> points.at(i).first >> points.at(i).second;
    }

    sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    long long ans = 0;

    auto first_pair = points.at(0);
    auto prev_pair = first_pair;
    for (int i = 0; i < n; i++) {
        auto it = points.at(i);
        if (i == 0) {
            continue;
        }
        if (first_pair.first == it.first) {
            long long input_num = first_pair.second + it.second / 2;
            ans = max(ans, input_num);
        } else {
            long long input_num = first_pair.second + it.second;
            ans = max(ans, input_num);
            break;
        }
        prev_pair = it;
    }
    cout << ans << endl;
    return 0;
}
