/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;

    int x = 0;
    for (int i = 0; i <= T.length() - U.length(); i++) {
        for (int j = 0; j < U.length(); j++) {
            char a = T.at(i + j);
            if (a == '?') {
                if (j == U.length() - 1) {
                    cout << "Yes" << endl;
                    return 0;
                }
                continue;
            } else if (a == U.at(j)) {
                if (j == U.length() - 1) {
                    cout << "Yes" << endl;
                    return 0;
                }
                continue;
            } else {
                break;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
