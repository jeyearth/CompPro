/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(m);
    vector<vector<int>> idx(n);
    vector<int> cnt(m);

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        cnt[i] = k;
        vec[i].resize(k);
        for (int j = 0; j < vec[i].size(); j++) {
            int e;
            cin >> e;
            e--;
            idx[e].push_back(i);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        b--;

        for (int j = 0; j < idx[b].size(); j++) {
            int c = idx[b][j];
            cnt[c]--;
            if (cnt[c] == 0) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
