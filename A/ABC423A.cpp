/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int x, c;
    cin >> x >> c;
    int ans = 1000 * (x / (1000 + c));
    cout << ans << endl;
    return 0;
}
