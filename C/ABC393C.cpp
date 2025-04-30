/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<pair<int, int>, int> vec;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            ans++;
            continue;
        }
        if (a > b) {
            swap(a, b);
        }
        vec[{a, b}] ++;
    }

    for (auto& [edge, v] : vec) {
        ans += v - 1;
    }

    cout << ans << endl;
    return 0;
}
