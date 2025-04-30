/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, yy;
    cin >> n >> yy;

    int x, y, z;

    x = -1;
    y = -1;
    z = -1;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (n - i); j++) {
            for (int k = 0; k <= (n -j); k++) {
                if ((i + j + k) == n) {
                    if ((10000 * i + 5000 * j + 1000 * k) == yy) {
                        x = i;
                        y = j;
                        z = k;
                    }
                }
            }
        }
    }

    cout << x << " " << y << " " << z << endl;

    return 0;
}
