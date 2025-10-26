/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int h;
    cin >> h;
    int count = 0;
    int day = 0;
    while (count <= h) {
        day++;
        count = pow(2, day) - 1;
    }
    cout << day << endl;
    return 0;
}
