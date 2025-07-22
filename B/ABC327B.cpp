/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long b;
    cin >> b;
    for (int i = 1; i <= 15; i++)
    {
        long long x = 1;
        for (int j = 0; j < i; j++) {
            if (b / i < x) {
                x = b + 1;
                break;
            }
            x *= i;
        }
        if (x == b) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
