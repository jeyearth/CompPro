/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int x, y;
    cin >> x >> y;

    x += y;
    if (x > 12) {
        x -= 12;
    }
    cout << x << endl;
    return 0;
}
