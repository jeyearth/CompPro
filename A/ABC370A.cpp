/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 0) {
        cout << "Yes" << endl;
    } else if (l == 0 && r == 1)
    {
        cout << "No" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}
