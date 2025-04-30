/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    map<int, int> m;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        m[i] = 1;
        v.at(i) = i;
    }

    int ans = 0;
    for (int i = 0; i < Q; i++) {
        int query;
        cin >> query;

        if (query == 1) {
            int P, H;
            cin >> P >> H;

            int index = v.at(P - 1);
            v.at(P - 1) = H - 1;

            if (m.at(index) == 2) {
                ans--;
            }
            m.at(index)--;
            if (m.at(H - 1) == 1) {
                ans++;
            }
            m.at(H - 1)++;
        } else if (query == 2) {
            cout << ans << endl;
        }
    }
    return 0;
}
