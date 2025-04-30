/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    int ans = 0;
    while (true)
    {
        /* code */
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2 != 0) {
                cout << ans << endl;
                return 0;
            } else {
                a.at(i) = a.at(i) / 2;
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
