/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        if (s.at(i) == '#' && s.at(i + 2) == '#' && s.at(i + 1) == '.') {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
