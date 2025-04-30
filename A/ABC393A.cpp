/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    bool a, b;
    string s;
    cin >> s;
    if (s == "sick") {
        a = true;
    } else {
        a = false;
    }
    cin >> s;
    if (s == "sick") {
        b = true;
    } else {
        b = false;
    }

    int ans;
    if (a && b) {
        ans = 1;
    } else if (a && !b) {
        ans = 2;
    } else if (!a && b) {
        ans = 3;
    } else {
        ans = 4;
    }

    cout << ans << endl;
    return 0;
}
