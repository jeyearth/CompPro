/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 3) {
        cout << "No" << endl;
    } else if (s.at(n - 3) == 't' && s.at(n - 2) == 'e' && s.at(n - 1) == 'a') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
