/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b;
    cin >> a >> b;
    int ans;
    if (a == b) {
        ans = 1;
    } else if (abs(b - a) % 2 == 1) {
        ans = 2;
    } else {
        ans = 3;
    }
    cout << ans << endl;
    return 0;
}
