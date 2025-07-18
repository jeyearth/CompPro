/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double result_takahashi = b /a;
    double result_aoki = d / c;
    if (result_takahashi > result_aoki) {
        cout << "TAKAHASHI" << endl;
    } else if (result_takahashi < result_aoki) {
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
    return 0;
}
