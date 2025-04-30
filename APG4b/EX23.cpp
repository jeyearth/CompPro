/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A.at(i);
    }

    map<int, int> m;
    for (int x : A) {
        if (!m.count(x)) {
            m[x] = 1;
        } else {
            m[x] = m.at(x) + 1;
        }
    }

    int max_cnt = 0;
    int ans = -1;
    for (int x : A) {
        if (max_cnt < m.at(x)) {
            max_cnt = m.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_cnt << endl;
    return 0;
}
