/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int minNum = min(x, y);
    int maxNum = max(x, y);
    if (minNum <= z && z <= maxNum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
