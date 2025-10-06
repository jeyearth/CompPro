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
    int ans = 0;
    if (s.at(0) == 'R' && s.at(1) == 'R' && s.at(2) == 'R') {
        ans = 3;
    } else if (s.at(0) == 'R' && s.at(1) == 'R') {
        ans = 2;
    } else if (s.at(1) == 'R' && s.at(2) == 'R') {
        ans = 2;
    } else if (s.at(0) == 'R' || s.at(1) == 'R' || s.at(2) == 'R') {
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}
