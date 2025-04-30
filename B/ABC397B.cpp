/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;
    int k = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i + k) % 2 == 0) {
            if (s.at(i) != 'i') {
                ans = ans + "i" + s.at(i);
                k++;
            } else {
                ans = ans + s.at(i);
            }
        } else {
            if (s.at(i) != 'o') {
                ans = ans + "o" + s.at(i);
                k++;
            } else {
                ans = ans + s.at(i);
            }
        }
    }

    if (ans.length() % 2 != 0) {
        k++;
    }

    cout << k << endl;
    return 0;
}
