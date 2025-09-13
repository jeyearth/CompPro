/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long a, b;
    cin >> a >> b;
    long long ans = a / b;
    if (a % b != 0) ans++;
    cout << ans << endl;
    return 0;
}
