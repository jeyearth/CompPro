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
    int index = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s.at(index) == t.at(i)) {
            cout << i + 1 << " ";
            index++;
        }
    }
    cout << endl;
    return 0;
}
