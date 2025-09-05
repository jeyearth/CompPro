/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int s, t, x;
    cin >> s >> t >> x;

    if (s < t) {
        if (s <= x && x < t) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (s > t) {
        if (s <= x || x < t) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
    return 0;
}
