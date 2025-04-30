/*
g++ test.cpp
./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        char a = s.at(i);
        if (isupper(a)) {
            ans = ans + a;
        }
    }

    cout << ans << endl;
    return 0;
}
