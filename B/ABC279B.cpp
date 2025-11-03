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
    for (int i = 0; i < s.length() - t.length() + 1 && s.length() >= t.length(); i++)
    {
        if (s.substr(i, t.length()) == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
