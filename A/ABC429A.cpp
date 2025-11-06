/*
g++ test.cpp
./a.out

Control + option + Nで実行
*/

#include <bits/stdc++.h>
using namespace std;

// #define PRINT_VARIABLE(var) std::cout << #var << " : " << var << std::endl

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        i <= m ? cout << "OK" : cout << "Too Many Requests";
        cout << endl;
    }
    return 0;
}
