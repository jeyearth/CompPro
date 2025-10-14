/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> a_vec(n);
    vector<long long> b_vec(n);

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a_vec.at(i);
    }
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        b_vec.at(i) = b;
        ans += a_vec.at(i) > b ? b : a_vec.at(i);
    }

    for (int i = 0; i < q; i++) {
        char c;
        cin >> c;
        long long x, y;
        cin >> x >> y;
        x--;
        long long a_old = a_vec.at(x);
        long long b_old = b_vec.at(x);
        bool a_old_is_smaller = a_old < b_old;
        if (c == 'A') {
            a_vec.at(x) = y;
        } else {
            b_vec.at(x) = y;
        }
        bool a_new_is_smaller = a_vec.at(x) < b_vec.at(x);
        if (a_old_is_smaller && a_new_is_smaller) {
            ans += (a_vec.at(x) - a_old);
        } else if (a_old_is_smaller && !a_new_is_smaller) {
            ans += (b_vec.at(x) - a_old);
        } else if (!a_old_is_smaller && a_new_is_smaller) {
            ans += (a_vec.at(x) - b_old);
        } else {
            ans += (b_vec.at(x) - b_old);
        }
        cout << ans << endl;
    }

    return 0;
}
