/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int l = 0; l <= c; l++) {
                if (500 * i + 100 * j + 50 * l == x) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
