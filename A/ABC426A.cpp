/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string x, y;
    cin >> x >> y;
    
    int x_num = 0;
    int y_num = 0;

    if (x == "Serval") {
        x_num = 1;
    } else if (x == "Lynx") {
        x_num = 2;
    }

    if (y == "Serval") {
        y_num = 1;
    } else if (y == "Lynx") {
        y_num = 2;
    }

    cout << (x_num >= y_num ? "Yes" : "No") << endl;
    return 0;
}
