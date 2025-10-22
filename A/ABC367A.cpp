/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b <= a && a <= c) {
        cout << "No" << endl;
    } else {
        if (b > c) {
            if (a > b || a < c) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
