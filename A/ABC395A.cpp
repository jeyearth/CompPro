/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pre;
    cin >> n;
    cin >> pre;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (!(pre < x)) {
            cout << "No" << endl;
            return 0;
        }
        pre = x;
    }

    cout << "Yes" << endl;
    return 0;
}
