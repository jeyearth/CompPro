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
    vector<int> a_vec(n);
    int d;
    int left_fixed = 0;
    int right_fixed = 0;
    vector<pair<int, int>> fixed_vec;
    for (int i = 0; i < n; ++i) {
        cin >> a_vec.at(i);
        if (i == 0) {
            continue;
        } else if (i == 1) {
            d = a_vec.at(i) - a_vec.at(i - 1);
            right_fixed = i;
            continue;
        }

        if (a_vec.at(i) - a_vec.at(i - 1) == d) {
            right_fixed = i;
            continue;
        } else {
            auto input = make_pair(left_fixed, right_fixed);
            fixed_vec.push_back(input);
            left_fixed = right_fixed;
            d = a_vec.at(i) - a_vec.at(i - 1);
            right_fixed = i;
        }
    }

    auto input = make_pair(left_fixed, right_fixed);
    fixed_vec.push_back(input);

    long long ans = 0;

    for (auto& p : fixed_vec) {
        int left = p.first;
        int right = p.second;

        int target_length = right - left + 1;
        long long add_num = 0;
        for (int i = 1; i <= target_length; ++i) {
            add_num += i;
        }
        ans += add_num;
    }

    ans -= fixed_vec.size() - 1;

    cout << ans << endl;
    return 0;
}
