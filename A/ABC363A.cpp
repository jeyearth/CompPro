/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int r;
    cin >> r;

    if (r < 100) {
        cout << 100 - r << endl;
    } else if (r < 200) {
        cout << 200 - r << endl;
    } else {
        cout << 300 - r << endl;
    }
    return 0;
}
