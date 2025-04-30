/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> b(n);
    vector<long long> w(m);

    for (int i = 0; i < b.size(); i++) {
        cin >> b.at(i);
    }
    for (int i = 0; i < w.size(); i++) {
        cin >> w.at(i);
    }

    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());

    long long ans = 0;
    bool whiteLock = false;
    for (int i = 0; i < n; i++) {
        if (!whiteLock && i >= m) {
            whiteLock = true;
        }

        if (!whiteLock) {
            if (w.at(i) < 0) {
                if (b.at(i) > 0) {
                    whiteLock = true;
                    ans = ans + b.at(i);
                }
            } else if (b.at(i) + w.at(i) >= 0) {
                ans = ans + b.at(i) + w.at(i);
            } else {
                break;
            }
        } else {
            if (b.at(i) > 0) {
                ans = ans + b.at(i);
            } else {
                break;
            }
        }

    }

    cout << ans << endl;

    return 0;
}
