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
    bool ans = false;
    if (a == 1 && b == 2) ans = true;
    if (a == 2 && b == 3) ans = true;
    if (a == 4 && b == 5) ans = true;
    if (a == 5 && b == 6) ans = true;
    if (a == 7 && b == 8) ans = true;
    if (a == 8 && b == 9) ans = true;
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
