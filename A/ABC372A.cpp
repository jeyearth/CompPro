/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (char c : s) {
        if (c != '.') {
            ans += c;
        }
    }
    cout << ans << endl;
    return 0;
}
