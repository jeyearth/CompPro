/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a_h, a_w, b_h, b_w;
    cin >> a_h >> a_w >> b_h >> b_w;

    if (a_h == b_h || a_h == b_w) {
        cout << "YES" << endl;
    } else if (a_w == b_h || a_w == b_w) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
