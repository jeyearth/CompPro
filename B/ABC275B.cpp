/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    long long NUM = 998244353;
    vector<long long> vec(6, 0);
    for (int i = 0; i < 6; ++i) {
        cin >> vec.at(i);
        vec.at(i) %= NUM;
    }

    long long left = vec.at(0) * vec.at(1);
    left %= NUM;
    left *= vec.at(2);
    left %= NUM;
    long long right = vec.at(3) * vec.at(4);
    right %= NUM;
    right *= vec.at(5);
    right %= NUM;

    long long ans = left + NUM - right;
    ans %= NUM;
    cout << ans << endl;
    return 0;
}
