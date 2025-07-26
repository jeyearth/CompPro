/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    for (int i = l - 1; i < r; i++)
    {
        if (s.at(i) != 'o') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
