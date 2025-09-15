/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    
    while (a <= b) {
        cout << a << " ";
        a += d;
    }
    return 0;
}
