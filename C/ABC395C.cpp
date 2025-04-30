/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<long long, int> m;

    int ans = -1;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (m.count(x)) {
            int v = m.at(x);
            int y = i - v + 1;
            if (ans == -1) {
                m.at(x) = i;
                ans = y;
            } else {
                if (y < ans) {
                    m.at(x) = i;
                    ans = y;
                } else {
                    m.at(x) = i;
                }
            }
        } else {
            m[x] = i;
        }
    }

    cout << ans << endl;

    return 0;
}
