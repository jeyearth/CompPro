/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int days = m;
    int ans = 0;
    while (days <= n) {
        days += p;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
