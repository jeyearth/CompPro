/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    vector<int> sa(n + 1), sb(n + 1);
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'a') {
            sa.at(i + 1) = 1;
        } else {
            sb.at(i + 1) = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sa.at(i + 1) += sa.at(i);
        sb.at(i + 1) += sb.at(i);
    }

    long long ans = 0;
    for (int l = 0; l < n; l++) {
        int ra, rb;
        {
            int wa = l, ac = n + 1;
            while (ac - wa > 1) {
                int wj = (wa + ac) / 2;
                if (sa.at(wj) - sa.at(l) >= a) {
                    ac = wj;
                } else {
                    wa = wj;
                }
            }
            ra = ac;
        }
        {
            int ac = l, wa = n + 1;
            while (wa - ac > 1) {
                int wj = (wa + ac) / 2;
                if (sb.at(wj) - sb.at(l) < b) {
                    ac = wj;
                } else {
                    wa = wj;
                }
            }
            rb = wa;
        }
        ans += max(0, rb - ra);
    }

    cout << ans << endl;
    return 0;
}
