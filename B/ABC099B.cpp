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
    int difference = b - a;
    int real_a = 0;
    for (int i = 1; i < difference; i++)
    {
        real_a += i;
    }
    cout << real_a - a << endl;
    return 0;
}
