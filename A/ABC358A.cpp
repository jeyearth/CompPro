/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    string s, t;
    cin >> s >> t;

    if (s == "AtCoder" && t == "Land") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
