/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int cal_m, cal_d;
    cin >> cal_m >> cal_d;
    int y, m, d;
    cin >> y >> m >> d;
    d += 1;
    if (d > cal_d) {
        d = 1;
        m += 1;
        if (m > cal_m) {
            m = 1;
            y += 1;
        }
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}
