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
    bool is_area = false;
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (!is_area) {
            if (s.at(i) == '|') {
                is_area = true;
            } else {
                ans += s.at(i);
            }
        } else if (s.at(i) == '|') {
            is_area = false;
        }
    }
    cout << ans << endl;
    return 0;
}
