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
    int first;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i != 0) {
            if (first != a) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            first = a;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
