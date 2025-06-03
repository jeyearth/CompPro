/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long n;
    cin >> n;

    long long a = 998244353;
    long long x;
    x = n % a;
    if (x < 0) {
        x = a + x;
    }
    cout << x << endl;
    return 0;
}
