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
    int ans = 0;
    int addLength = 1;
    set<string> str_set;
    while (addLength <= s.length()) {
        for (int i = 0; i < s.length() - addLength + 1; i++) {
            str_set.insert(s.substr(i, addLength));
        }
        addLength++;
    }
    cout << str_set.size() << endl;
    return 0;
}
