/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int a, b;
    cin >> a >> b;

    double z = a * a + b * b;
    z = sqrt(z);
    double zx = a;
    double zy = b;
    cout << a / z << " " << b / z << endl;
    return 0;
}
