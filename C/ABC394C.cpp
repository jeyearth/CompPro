/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = s.length() - 2; i >= 0; i--) {
        // 次の値
        char &next = s.at(i + 1);
        // 現在の値
        char &current = s.at(i);

        if (current == 'W' && next == 'A') {
            current = 'A';
            next = 'C';
        }
    }

    cout << s << endl;
    return 0;
}
