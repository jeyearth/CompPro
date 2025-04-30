/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;

    int a = n / 2;
    for (int i = 0; i < n; i++) {
        if (n % 2 == 1 && a == i) {
            s = s + "=";
        } else if (n % 2 == 0) {
            if (a - 1 == i || a == i) {
                s = s + "=";
            } else {
                s = s + "-";
            }
        } else {
            s = s + "-";
        }
    }

    cout << s << endl;
    return 0;
}
