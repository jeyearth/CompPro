/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int mid = n / 2;
    bool ans = t > mid || a > mid;
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
