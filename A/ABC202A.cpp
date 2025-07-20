/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;
    sum += 7 - a;
    sum += 7 - b;
    sum += 7 - c;
    cout << sum << endl;
    return 0;
}
