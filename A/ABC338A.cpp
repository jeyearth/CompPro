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
    char first_char = s.at(0);
    if (islower(first_char)) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i < s.size(); i++) {
        if (!islower(s.at(i))) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
