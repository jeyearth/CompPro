/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    cin >> x;

    int ans = 3;
    if (x >= 38.0) {
        ans = 1;
    } else if (x >= 37.5) {
        ans = 2;
    }

    cout << ans << endl;

    return 0;
}
