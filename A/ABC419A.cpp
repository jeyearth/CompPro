/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s;
    cin >> s;

    if (s == "red") {
        cout << "SSS" << endl;
    } else if (s == "blue") {
        cout << "FFF" << endl;
    } else if (s == "green") {
        cout << "MMM" << endl;
    } else {
        cout << "Unknown" << endl;
    }
    return 0;
}
