/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < s.length(); i++) {

        if (s.at(i) == 'A') {
            for (int j = i + 1; j < s.length(); j++) {

                if (s.at(j) == 'B') {
                    int a = j - i;
                    if ((j + a) >= s.length()) break;
                    if (s.at(j + a) == 'C') {
                        ans++;
                        continue;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
