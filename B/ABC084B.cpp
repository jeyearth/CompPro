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
    string s;
    cin >> s;

    bool ans = true;
    if (s.at(a) != '-' || s.length() != a + b + 1) {
        ans = false;
    }
    string a_str = s.substr(0, a);
    string b_str = s.substr(a + 1, a + b);
    try {
        int a_num = stoi(a_str);
        int b_num = stoi(b_str);
    } catch (const invalid_argument& e) {
        ans = false;
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
