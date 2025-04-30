/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n, string(n, '.'));

    for (int i = 0; i < n; i++) {
        int r = n - 1 - i;
        if (i > r) continue;
        char c = '#';
        if (i % 2) c = '.';
        for (int j = i; j <= r; j++) {
            for (int k = i; k <= r; k++) {
                s[j][k] = c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
