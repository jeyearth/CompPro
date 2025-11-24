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
    if (s == "ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB") {
        cout << "Yes" << endl;
    } else if (s == "FAC" || s == "GBD") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
