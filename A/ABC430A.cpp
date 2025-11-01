/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool ans = false;
    if (c >= a) {
        if (d < b) {
            ans = true;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
