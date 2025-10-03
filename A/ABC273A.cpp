/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int f(int x) {
    if (x == 0) {
        return 1;
    }
    return x * f(x - 1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
